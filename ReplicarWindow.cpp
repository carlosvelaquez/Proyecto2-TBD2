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
  QListWidgetItem* item = ui.listWidgetDisponibles->currentItem();
  QList<QListWidgetItem*> items = ui.listWidgetReplicar->findItems(item->text(), Qt::MatchContains);
  if(items.size()==0){
    ui.listWidgetReplicar->addItem(item->text());
    ui.listWidgetReplicar->setCurrentRow(0);
  }else{
    QMessageBox Msgbox;
    Msgbox.setText("El elemento ya ha sido agregado");
    Msgbox.exec();
  }
  ui.listWidgetDisponibles->setCurrentRow(0);
}

void ReplicarWindow::removeTable(){
  QListWidgetItem* item = ui.listWidgetReplicar->currentItem();
  qDebug() <<item->text();
  ui.listWidgetReplicar->removeItemWidget(item);
}

void ReplicarWindow::reset(){
  ui.listWidgetReplicar->clear();
}

// Acá se generan los cambios
void ReplicarWindow::replicate(){

}
