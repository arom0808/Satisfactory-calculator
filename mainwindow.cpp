#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent), ui(new Ui::MainWindow) {
  ui->setupUi(this);
  currentScene = new WidgProjectsManager(ui->centralwidget);
  ui->gridLayout->addWidget(currentScene);
  QObject::connect(ui->OpenProjectMenuFile, SIGNAL(triggered()), this,
                   SLOT(openProject()));
  QObject::connect(ui->CreateProjectMenuFile, SIGNAL(triggered()), this,
                   SLOT(createProject()));
}
void MainWindow::openProject() {
  //  if (true) {
  //    QMessageBox::warning(this, tr("Satisfactory calculator"),
  //                         tr("You have not created any projects."));
  //  } else {
  secondCurrentScene = new WindOpenProject(
      this); // Сдесь если в WindOpenProject будет конструктор
             // по умолчанию, то будет WindOpenProject();
  secondCurrentScene->show();
  //  }
}
void MainWindow::createProject() {
  secondCurrentScene = new WindCreateProject(
      this); // Сдесь если в WindCreateProject будет конструктор
             // по умолчанию, то будет WindCreateProject();
  secondCurrentScene->show();
}
void MainWindow::closeSecondScene() {
  secondCurrentScene->close();
  delete secondCurrentScene;
  secondCurrentScene = nullptr;
}

MainWindow::~MainWindow() { delete ui; }
