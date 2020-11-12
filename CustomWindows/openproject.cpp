#include "openproject.h"
#include "ui_openproject.h"

OpenProject::OpenProject(QWidget *parent)
    : QWidget() /*Сдесь стояло Qwidget(parrent)*/, ui(new Ui::OpenProject) {
  ui->setupUi(this);
  QObject::connect(ui->OCBox, SIGNAL(rejected()), parent,
                   SLOT(cancelOpenProject()));
}

OpenProject::~OpenProject() { delete ui; }
