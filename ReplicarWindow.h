#ifndef REPLICAR_WINDOW
#define REPLICAR_WINDOW

#include <QWidget>
#include "ui_ReplicarWindow.h"

class ReplicarWindow : public QWidget{
  Q_OBJECT

private:
  Ui::ReplicarWindow ui;

public:
  explicit ReplicarWindow(QWidget* parent = 0);
};

#endif /* end of include guard: REPLICAR_WINDOW */
