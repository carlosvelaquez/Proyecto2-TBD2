#include "ReplicarWindow.h"

ReplicarWindow::ReplicarWindow(QWidget* parent) : QWidget(parent){
  ui.setupUi(this);

  connect(ui.pushButtonAdd, SIGNAL(clicked()), this, SLOT(addTable()));
  connect(ui.pushButtonRemove, SIGNAL(clicked()), this, SLOT(removeTable()));
  connect(ui.pushButtonReset, SIGNAL(clicked()), this, SLOT(reset()));
  connect(ui.pushButtonReplicate, SIGNAL(clicked()), this, SLOT(replicate()));

  ui.listWidgetDisponibles->setCurrentRow(0);
}

void ReplicarWindow::setDbOrigen(QSqlDatabase* dbOrigen_p){
  dbOrigen = dbOrigen_p;
  QStringList tables = dbOrigen->tables();
  for(int i=0 ; i<tables.size(); i++){
    if(i<tables.size()-2){
      if(!tables.at(i).contains("bitacora",Qt::CaseInsensitive) ){
        ui.listWidgetDisponibles->addItem(tables.at(i));
      }
    }
  }
}

void ReplicarWindow::setDbDestino(QSqlDatabase* dbDestino_p){
  dbDestino = dbDestino_p;
}



/* ============== Acá se agrega la tabla a la derecha ============== */
void ReplicarWindow::addTable(){

  bool pass = true;
  QListWidgetItem* item = ui.listWidgetDisponibles->currentItem();

  QSqlQuery query_origen(*dbOrigen);


  for(size_t i=0; i<tables.size(); i++){
    if(tables.at(i) == item->text())
      pass = false;
  }

  if(pass){
    reset();
    query_origen.prepare("EXEC GenerarBitacora @TableName='"+item->text()+"'"); //Genera la bitacora y sus triggers

    if(!query_origen.exec()) qDebug()<<"Hubo un error al crear la bitacora, ReplicarWindow.cpp";
    else qDebug() <<"Se creo la bitacora exitosamente";

    tables.push_back(item->text());
    for(size_t i=0; i<tables.size(); i++)
       ui.listWidgetReplicar->addItem(tables.at(i));


    ui.listWidgetDisponibles->clear();
    QStringList tables = dbOrigen->tables();
    for(int i=0 ; i<tables.size(); i++){
      if(i<tables.size()-2) ui.listWidgetDisponibles->addItem(tables.at(i));
    }
  }else{
    QMessageBox Msgbox;
    Msgbox.setText("No puede agregar la tabla de nuevo");
    Msgbox.exec();
  }

  ui.listWidgetDisponibles->setCurrentRow(0);
  ui.listWidgetReplicar->setCurrentRow(0);
}

/* ============== Acá se elimina la tabla de la derecha ============== */
void ReplicarWindow::removeTable(){
    QListWidgetItem* item = ui.listWidgetReplicar->currentItem(); // Elemento seleccinado que se va a eliminar
    QSqlQuery query_origen(*dbOrigen);

    for(size_t i=0; i<tables.size(); i++){

      if(tables.at(i) == item->text()){
        tables.erase(tables.begin()+i);
      }

    }

    query_origen.prepare("EXEC DropBitacora @TableName='"+item->text()+"'");

    if(!query_origen.exec()) qDebug()<<"Hubo un error al eliminar la bitacora, ReplicarWindow.cpp";
    else qDebug() <<"Se elimino la bitacora exitosamente";

    reset();
    for(size_t i=0; i<tables.size(); i++)
       ui.listWidgetReplicar->addItem(tables.at(i));


    ui.listWidgetDisponibles->clear();
    QStringList tables = dbOrigen->tables();
    for(int i=0 ; i<tables.size(); i++){
      if(i<tables.size()-2){
        if(!tables.at(i).contains("bitacora",Qt::CaseInsensitive) ){
          ui.listWidgetDisponibles->addItem(tables.at(i));
        }
      }
    }
}


void ReplicarWindow::reset(){
  ui.listWidgetReplicar->clear();
}

/* ============== Acá se copian los datos ============== */
void ReplicarWindow::replicate(){

  QSqlQuery queryOrigen(*dbOrigen);
  QSqlQuery queryDestino(*dbDestino);


  //Se toman todos los datos de las tablas que se quieren replicar
  for(size_t i=0; i<tables.size(); i++){
    queryOrigen.prepare("SELECT * FROM "+tables.at(i));

    if( !queryOrigen.exec() )  qDebug()<< "Hubo un error al seleccionar los datos, ReplicarWindow";
    else{

      qDebug()<<"Datos seleccinados exitosamente";
      QSqlRecord rec = queryOrigen.record();
      QString values;
      while(queryOrigen.next()){

        values = "";
        for(int i=0; i<rec.count(); i++){ //Obtiene el data de cada tupla
          if(i==rec.count()-1) values+= "'"+queryOrigen.value(i).toString()+"'";
          else values+= "'"+queryOrigen.value(i).toString()+"', ";
        }
        queryDestino.prepare("INSERT INTO "+tables.at(i)+" VALUES ( "+values+" )");
        if( !queryDestino.exec() ) qDebug()<< "Hubo un error al insertar los datos, ReplicarWindow";
      }
      ui.listWidgetReplicar->clear();
      QMessageBox Msgbox;
      Msgbox.setText("La replicación se ha realizado exitosamente");
      Msgbox.exec();
    }

  }

}
