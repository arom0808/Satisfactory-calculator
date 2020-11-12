#ifndef WIDGPROJECTSMANAGER_H
#define WIDGPROJECTSMANAGER_H

#include <QWidget>

namespace Ui {
  class WidgProjectsManager;
}

class WidgProjectsManager : public QWidget
{
  Q_OBJECT

public:
  explicit WidgProjectsManager(QWidget *parent = nullptr);
  ~WidgProjectsManager();

private:
  Ui::WidgProjectsManager *ui;
};

#endif // WIDGPROJECTSMANAGER_H
