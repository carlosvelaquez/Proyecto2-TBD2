#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "ui_MainWindow.h"
#include <QSqlDatabase>
#include <QDebug>
#include "ReplicarWindow.h"
#include <QString>

class MainWindow : public QMainWindow{
  Q_OBJECT
private:
  Ui::MainWindow ui;

  QSqlDatabase* dbOrigen ;
  QSqlDatabase* dbDestino;

private slots:
  void conectarBdOrigen();
  void conectarBdDestino();

public:
  void clearWidgets();
  void setDbOrigen(QSqlDatabase*);
  void setDbDestino(QSqlDatabase*);
  explicit MainWindow(QWidget* parent = 0);
};

#endif /* end of include guard: MAINWINDOW_H */
