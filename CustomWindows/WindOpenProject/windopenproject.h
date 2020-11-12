#ifndef WINDOPENPROJECT_H
#define WINDOPENPROJECT_H

#include <QWidget>

namespace Ui {
  class WindOpenProject;
}

class WindOpenProject : public QWidget
{
  Q_OBJECT

public:
  explicit WindOpenProject(QWidget *parent = nullptr);
  ~WindOpenProject();

private:
  Ui::WindOpenProject *ui;
};

#endif // WINDOPENPROJECT_H
