#include "windopenproject.h"
#include "ui_windopenproject.h"

WindOpenProject::WindOpenProject(QWidget *parent)
    : QWidget(), ui(new Ui::WindOpenProject) { // по умолчанию QWidget(parent)
  ui->setupUi(this);
  QObject::connect(ui->OCBox, SIGNAL(rejected()), parent,
                   SLOT(closeSecondScene()));
}

WindOpenProject::~WindOpenProject() { delete ui; }
