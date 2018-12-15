#include <QApplication>
#include <QDebug>
#include <QtSql>
#include <QSqlDatabase>
#include <QStringList>

#include "MainWindow.h"
#include "ReplicarWindow.h"

int main(int argc, char *argv[]) {
  QApplication app(argc, argv);

  //Base de datos origen
  QSqlDatabase dbOrigen = QSqlDatabase::addDatabase("QODBC", "dbOrigen");
  dbOrigen.setDatabaseName("DRIVER={SQL Server};Server=68.183.248.73;Database=TEST;Uid=SA;Port=1433;Pwd=Papitopiernaslargas69;WSID=.");

  if (dbOrigen.open()) {
    qDebug() << "Conectado a la db origen exitosamente.";
  }else{
    qDebug() << "Error al conectarse a la db origen: " << dbOrigen.lastError();
  }

  //Base de datos destino
  QSqlDatabase dbDestino = QSqlDatabase::addDatabase("QMYSQL", "dbDestino");
  dbDestino.setHostName("68.183.248.73");
  dbDestino.setDatabaseName("TEST");
  dbDestino.setUserName("admin");
  dbDestino.setPassword("papitopiernaslargas69");

  if (dbDestino.open()) {
    qDebug() << "Conectado a la db destino exitosamente.";
  }else{
    qDebug() << "Error al conectarse a la db destino: " << dbDestino.lastError();
  }



// ==============================================
  MainWindow w;

  w.setDbOrigen(&dbOrigen);
  w.setDbDestino(&dbDestino);
  w.show();

  if(dbOrigen.isOpen() && dbDestino.isOpen()){
    qDebug()<<"Ambas están conectadas";
  }

  return app.exec();
}
