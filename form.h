#ifndef FORM_H
#define FORM_H

#include <mainwindow.h>
#include <QMainWindow>

namespace Ui {
class Form;
}

class Form : public QMainWindow
{
    Q_OBJECT

public:
    explicit Form(QWidget *parent = 0);
    ~Form();

private slots:
    void on_pushButton_clicked();
    void on_pushButton_2_clicked();

private:
    Ui::Form *ui;
    MainWindow mainwindow;
};

#endif // FORM_H
