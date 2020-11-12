#include "windcreateproject.h"
#include "ui_windcreateproject.h"

WindCreateProject::WindCreateProject(QWidget *parent)
    : QWidget(), ui(new Ui::WindCreateProject) {
  ui->setupUi(this);
}

WindCreateProject::~WindCreateProject() { delete ui; }
