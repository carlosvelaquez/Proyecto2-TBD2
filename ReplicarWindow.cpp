#include "ReplicarWindow.h"

ReplicarWindow::ReplicarWindow(QWidget* parent) : QWidget(parent){
  ui.setupUi(this);

  connect(ui.pushButtonAdd, SIGNAL(clicked()), this, SLOT(addTable()));
  connect(ui.pushButtonRemove, SIGNAL(clicked()), this, SLOT(removeTable()));
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

void ReplicarWindow::addTable(){
  QListWidgetItem* item = ui.listWidgetDisponibles->currentItem(); // El item seleccionado
  ui.listWidgetReplicar->addItem(item->text());
}

void ReplicarWindow::removeTable(){

}
