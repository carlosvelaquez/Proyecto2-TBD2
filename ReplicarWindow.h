#ifndef REPLICAR_WINDOW
#define REPLICAR_WINDOW


#include <QWidget>
#include "ui_ReplicarWindow.h"
#include <QSqlDatabase>
#include <QStringList>
#include <QListWidgetItem>
#include <QList>
#include <QDebug>
#include <QMessageBox>
#include <QSqlQuery>
#include <QSqlRecord>
#include <vector>

using namespace std;

class ReplicarWindow : public QWidget{
  Q_OBJECT

private:
  Ui::ReplicarWindow ui;

  vector<QString> tables;
  QSqlDatabase* dbOrigen ;
  QSqlDatabase* dbDestino;

private slots:
    void addTable();
    void removeTable();
    void replicate();
    void reset();

public:

  void setDbOrigen(QSqlDatabase*);
  void setDbDestino(QSqlDatabase*);

  explicit ReplicarWindow(QWidget* parent = 0);
};

#endif /* end of include guard: REPLICAR_WINDOW */
