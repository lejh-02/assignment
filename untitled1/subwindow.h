#ifndef SUBWINDOW_H
#define SUBWINDOW_H

#include <QMainWindow>

namespace Ui {
class subwindow;
}

class subwindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit subwindow(QWidget *parent = nullptr);
    ~subwindow();

private:
    Ui::subwindow *ui;
};

#endif // SUBWINDOW_H
