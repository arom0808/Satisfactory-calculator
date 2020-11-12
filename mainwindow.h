#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "CustomWidgets/WidgProjectsManager/widgprojectsmanager.h"
#include "CustomWindows/WindCreateProject/windcreateproject.h"
#include "CustomWindows/WindOpenProject/windopenproject.h"
#include <QDebug>
#include <QtWidgets>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow {
  Q_OBJECT

public:
  QWidget *currentScene = nullptr, *secondCurrentScene = nullptr;
  bool isProjectOpen = false;
  MainWindow(QWidget *parent = nullptr);
  ~MainWindow();

public slots:
  void openProject();
  void createProject();
  void closeSecondScene();

private:
  Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
