#include "MainWindow.h"

MainWindow::MainWindow(QWidget* parent) :
  QMainWindow(parent){
  ui.setupUi(this);

  connect(ui.pushButtonConnectDBO, SIGNAL(clicked()), this, SLOT(conectarBdOrigen()));
  connect(ui.pushButtonConnectDBD, SIGNAL(clicked()), this, SLOT(conectarBdDestino()));
  fillWidgets();
}

void MainWindow::fillWidgets(){
  ui.lineEditUserName_Origen->insert("SA");
  ui.lineEditDatabaseNameOrigen->insert("TEST");
  ui.lineEditPortOrigen->insert("1433");
  ui.lineEditInstanceNameOrigen->insert("");
  ui.lineEditPasswordOrigen->insert("Papitopiernaslargas69");

  ui.lineEditUserName_Destino->insert("admin");
  ui.lineEditDatabaseNameDestino->insert("TEST");
  ui.lineEditPortDestino->insert("");
  ui.lineEditInstanceNameDestino->insert("");
  ui.lineEditPasswordDestino->insert("papitopiernaslargas69");
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


// En el momento en que las dos bases de datos estén conectadas, la pantalla de
// ReplicarWindow estará habilitada.

void MainWindow::conectarBdOrigen(){

  QString userName = ui.lineEditUserName_Origen->text();
  QString dataBaseName = ui.lineEditDatabaseNameOrigen->text();
  QString port = ui.lineEditPortOrigen->text();
  QString instanceName = ui.lineEditInstanceNameOrigen->text(); //Este no se usa
  QString password = ui.lineEditPasswordOrigen->text();
  QString m = "DRIVER={SQL Server};Server=68.183.248.73;Database="+dataBaseName+";Uid="+userName+";Port="+port+";Pwd="+password+";WSID=.";

  dbOrigen.setDatabaseName(m);

  //dbOrigen.setDatabaseName("DRIVER={SQL Server};Server=68.183.248.73;Database=TEST;Uid=SA;Port=1433;Pwd=Papitopiernaslargas69;WSID=.");

  if (dbOrigen.open()) {
    QMessageBox Msgbox;
    Msgbox.setText("Se ha conectado exitosamente");
    Msgbox.exec();
  }else{
    QMessageBox Msgbox;
    Msgbox.setText("Error al conectar, verifique las credenciales");
    Msgbox.exec();
  }


  if(dbOrigen.isOpen() && dbDestino.isOpen()){
    ReplicarWindow* rw = new ReplicarWindow();
    rw->setDbOrigen(&dbOrigen);
    rw->setDbDestino(&dbDestino);
    rw->show();
  }

}

void MainWindow::conectarBdDestino(){

  QString userName = ui.lineEditUserName_Destino->text();
  QString dataBaseName = ui.lineEditDatabaseNameDestino->text();
  QString port = ui.lineEditPortDestino->text();
  QString instanceName = ui.lineEditInstanceNameDestino->text();
  QString password = ui.lineEditPasswordDestino->text();


  //Base de datos destino
  dbDestino.setHostName("68.183.248.73");
  dbDestino.setDatabaseName(dataBaseName);
  dbDestino.setUserName(userName);
  dbDestino.setPassword(password);

  if (dbDestino.open()) {
    QMessageBox Msgbox;
    Msgbox.setText("Se ha conectado exitosamente");
    Msgbox.exec();
  }else{
    QMessageBox Msgbox;
    Msgbox.setText("Error al conectar, verifique las credenciales");
    Msgbox.exec();
  }

  if(dbOrigen.isOpen() && dbDestino.isOpen()){
    ReplicarWindow* rw = new ReplicarWindow();
    rw->setDbOrigen(&dbOrigen);
    rw->setDbDestino(&dbDestino);
    rw->show();
  }
}
