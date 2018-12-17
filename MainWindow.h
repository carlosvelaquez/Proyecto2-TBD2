#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "ui_MainWindow.h"
#include <QSqlDatabase>
#include <QDebug>
#include "ReplicarWindow.h"
#include <QString>
#include <QMessageBox>

class MainWindow : public QMainWindow{
  Q_OBJECT
private:
  Ui::MainWindow ui;

  QSqlDatabase dbOrigen  = QSqlDatabase::addDatabase("QODBC", "dbOrigen");
  QSqlDatabase dbDestino = QSqlDatabase::addDatabase("QMYSQL", "dbDestino");

private slots:
  void conectarBdOrigen();
  void conectarBdDestino();
  void connectarAmbasdb();
  void limpiarCampos();

public:
  void clearWidgets();
  void fillWidgets();

  explicit MainWindow(QWidget* parent = 0);
};

#endif /* end of include guard: MAINWINDOW_H */
