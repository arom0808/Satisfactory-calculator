#ifndef CREATEPROJECT_H
#define CREATEPROJECT_H

#include <QWidget>

namespace Ui {
  class CreateProject;
}

class CreateProject : public QWidget
{
  Q_OBJECT

public:
  explicit CreateProject(QWidget *parent = nullptr);
  ~CreateProject();

private:
  Ui::CreateProject *ui;
};

#endif // CREATEPROJECT_H
