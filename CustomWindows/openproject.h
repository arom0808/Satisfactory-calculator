#ifndef OPENPROJECT_H
#define OPENPROJECT_H

#include <QWidget>

namespace Ui {
  class OpenProject;
}

class OpenProject : public QWidget
{
  Q_OBJECT

public:
  explicit OpenProject(QWidget *parent = nullptr);
  ~OpenProject();

private:
  Ui::OpenProject *ui;
};

#endif // OPENPROJECT_H
