#include "form.h"
#include "ui_form.h"

Form::Form(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Form)
{
    ui->setupUi(this);
}

Form::~Form()
{
    delete ui;
}

void Form::on_pushButton_clicked()
{
    this->hide();
    mainwindow.show();
    mainwindow.exec();
    this->show();
}

void Dialog::on_pushButton_2_clicked()
{
    this->close();
}
