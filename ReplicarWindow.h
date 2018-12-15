#ifndef REPLICAR_WINDOW
#define REPLICAR_WINDOW


#include <QWidget>
#include "ui_ReplicarWindow.h"
#include <QSqlDatabase>
#include <QStringList>
#include <QListWidgetItem>
#include <QList>
#include <QDebug>

class ReplicarWindow : public QWidget{
  Q_OBJECT

private:
  Ui::ReplicarWindow ui;

  QSqlDatabase* dbOrigen ;
  QSqlDatabase* dbDestino;

private slots:
    void addTable();
    void removeTable();

public:

  void setDbOrigen(QSqlDatabase*);
  void setDbDestino(QSqlDatabase*);

  explicit ReplicarWindow(QWidget* parent = 0);
};

#endif /* end of include guard: REPLICAR_WINDOW */
