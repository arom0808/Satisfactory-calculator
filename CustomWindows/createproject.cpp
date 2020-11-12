#include "createproject.h"
#include "ui_createproject.h"

CreateProject::CreateProject(QWidget *parent) :
  QWidget(parent),
  ui(new Ui::CreateProject)
{
  ui->setupUi(this);
}

CreateProject::~CreateProject()
{
  delete ui;
}
