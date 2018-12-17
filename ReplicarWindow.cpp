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
    if(i<tables.size()-2) ui.listWidgetDisponibles->addItem(tables.at(i));
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

    reset();

    for(size_t i=0; i<tables.size(); i++){

      if(tables.at(i) == item->text()){
        tables.erase(tables.begin()+i);
      }

    }

    query_origen.prepare("EXEC DropBitacora @TableName='"+item->text()+"'");

    if(!query_origen.exec()) qDebug()<<"Hubo un error al eliminar la bitacora, ReplicarWindow.cpp";
    else qDebug() <<"Se elimino la bitacora exitosamente";


    for(size_t i=0; i<tables.size(); i++)
       ui.listWidgetReplicar->addItem(tables.at(i));
}


void ReplicarWindow::reset(){
  ui.listWidgetReplicar->clear();
}

/* ============== Acá se copian los datos ============== */
void ReplicarWindow::replicate(){

}
