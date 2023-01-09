#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <wiringPi.h>
#include <wiringSerial.h>
using namespace Qt;
#define elif else if
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}
bool flag;
void MainWindow::on_pushButton_clicked()
{
    pinMode(ui->lineEdit->text().toInt(),OUTPUT);
    flag=!flag;
    if(flag)
    {
        digitalWrite(ui->lineEdit->text().toInt(),HIGH);
        ui->checkBox->setCheckState(Checked);
    }
    else
    {
        digitalWrite(ui->lineEdit->text().toInt(),LOW);
        ui->checkBox->setCheckState(Unchecked);
    }
}

void MainWindow::on_checkBox_stateChanged(int arg1)
{

}
