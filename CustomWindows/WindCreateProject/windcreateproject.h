#ifndef WINDCREATEPROJECT_H
#define WINDCREATEPROJECT_H

#include <QWidget>

namespace Ui {
class WindCreateProject;
}

class WindCreateProject : public QWidget {
  Q_OBJECT

public:
  explicit WindCreateProject(QWidget *parent = nullptr);
  ~WindCreateProject();

private:
  Ui::WindCreateProject *ui;
};

#endif // WINDCREATEPROJECT_H
