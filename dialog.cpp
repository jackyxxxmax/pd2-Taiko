#include "dialog.h"
#include "ui_dialog.h"

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);
}

Dialog::~Dialog()
{
    delete ui;
}

void Dialog::on_pushButton_clicked()
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
