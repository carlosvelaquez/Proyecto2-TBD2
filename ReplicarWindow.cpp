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



// Slots
void ReplicarWindow::addTable(){
  bool pass = false;
  QListWidgetItem* item = ui.listWidgetDisponibles->currentItem();

  for(size_t i=0; i<tables.size(); i++){
    if(item->text() == tables.at(i)) pass =  true;
  }

  if(pass){
    QMessageBox Msgbox;
    Msgbox.setText("El elemento ya ha sido agregado");
    Msgbox.exec();
  }else{
    tables.push_back(item->text());
    ui.listWidgetReplicar->addItem(item->text());
  }

  ui.listWidgetReplicar->setCurrentRow(0);
  ui.listWidgetDisponibles->setCurrentRow(0);
}

void ReplicarWindow::removeTable(){
  QListWidgetItem* item = ui.listWidgetReplicar->currentItem();
  for(size_t i=0; i<tables.size(); i++){
    if(item->text() == tables.at(i)) tables.erase(tables.begin()+i);
  }

  reset();
  for(size_t i=0; i<tables.size(); i++){
    ui.listWidgetReplicar->addItem(tables.at(i));
  }
}

void ReplicarWindow::reset(){
  ui.listWidgetReplicar->clear();
}

// Acá se generan los cambios
void ReplicarWindow::replicate(){
  QSqlQuery query(*dbOrigen);
  QSqlRecord rec;
  for(size_t i=0; i<tables.size(); i++){
    query.prepare("SELECT * FROM "+tables.at(i));

      if( !query.exec() ) qDebug() << "Hubo un error";
      else{
        rec = query.record();
        while( query.next() )
        {

          for( int c=0; c<rec.count(); c++ ) {
            query.value(c);
          }
        }
      }

  }

}
