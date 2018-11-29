#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "ui_MainWindow.h"

class MainWindow : public QMainWindow{
  Q_OBJECT
private:
  Ui::MainWindow ui;
  
public:
  explicit MainWindow(QWidget* parent = 0);
};

#endif /* end of include guard: MAINWINDOW_H */
