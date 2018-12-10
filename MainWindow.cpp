#include "MainWindow.h"

MainWindow::MainWindow(QWidget* parent) :
  QMainWindow(parent){
  ui.setupUi(this);

  connect(ui.pushButtonConnectDBO, SIGNAL(clicked()), this, SLOT(conectarBdOrigen()));
  connect(ui.pushButtonConnectDBD, SIGNAL(clicked()), this, SLOT(conectarBdDestino()));
}

void MainWindow::clearWidgets(){
  ui.lineEditUserName_Origen->insert("");
  ui.lineEditDatabaseNameOrigen->insert("");
  ui.lineEditPortOrigen->insert("");
  ui.lineEditInstanceNameOrigen->insert("");
  ui.lineEditPasswordOrigen->insert("");

  ui.lineEditUserName_Destino->insert("");
  ui.lineEditDatabaseNameDestino->insert("");
  ui.lineEditPortDestino->insert("");
  ui.lineEditInstanceNameDestino->insert("");
  ui.lineEditPasswordDestino->insert("");
}

void MainWindow::setDbOrigen(QSqlDatabase* dbOrigen_p){
  dbOrigen = dbOrigen_p;
}

void MainWindow::setDbDestino(QSqlDatabase* dbDestino_p){
  dbDestino = dbDestino_p;
}

// En el momento en que las dos bases de datos estén conectadas, la pantalla de
// ReplicarWindow estará habilitada.

void MainWindow::conectarBdOrigen(){
  clearWidgets();

  QString userName = ui.lineEditUserName_Origen->text();
  QString dataBaseName = ui.lineEditDatabaseNameOrigen->text();
  QString port = ui.lineEditPortOrigen->text();
  QString instanceName = ui.lineEditInstanceNameOrigen->text();
  QString password = ui.lineEditPasswordOrigen->text();


  /*if(userName != "" && dataBaseName != "" && port != "" && instanceName != "" && password != ""){
    //Mostrar una notificacion que no se conecto
  }else{
    if(dbOrigen->isOpen() && dbDestino->isOpen()){
      ReplicarWindow* rw = new ReplicarWindow();
      rw->show();
    }
  }*/

  ReplicarWindow* rw = new ReplicarWindow();
  rw->show();
}

void MainWindow::conectarBdDestino(){
  clearWidgets();

  QString userName = ui.lineEditUserName_Destino->text();
  QString dataBaseName = ui.lineEditDatabaseNameDestino->text();
  QString port = ui.lineEditPortDestino->text();
  QString instanceName = ui.lineEditInstanceNameDestino->text();
  QString password = ui.lineEditPasswordDestino->text();

  /*if(userName != "" && dataBaseName != "" && port != "" && instanceName != "" && password != ""){
    //Mostrar una notificacion que no se conecto
  }else{
    if(dbOrigen->isOpen() && dbDestino->isOpen()){
      ReplicarWindow* rw = new ReplicarWindow();
      rw->show();
    }
  }*/

  ReplicarWindow* rw = new ReplicarWindow();
  rw->show();
}
