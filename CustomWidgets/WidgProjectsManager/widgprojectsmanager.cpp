#include "widgprojectsmanager.h"
#include "ui_widgprojectsmanager.h"

WidgProjectsManager::WidgProjectsManager(QWidget *parent)
    : QWidget(parent), ui(new Ui::WidgProjectsManager) {
  ui->setupUi(this);
  QObject::connect(ui->OpenProjectButton, SIGNAL(clicked()), parent->parent(),
                   SLOT(openProject()));
  QObject::connect(ui->CreateProjectButton, SIGNAL(clicked()), parent->parent(),
                   SLOT(createProject()));
}

WidgProjectsManager::~WidgProjectsManager() { delete ui; }
