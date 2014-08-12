#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    double A,B,C;
    A=ui->lineEdit->text().toDouble();
    B=ui->lineEdit_2->text().toDouble();
    C=A+B;

    ui->lineEdit_3->setText(QString::number(C));
}

void MainWindow::on_pushButton_3_clicked()
{
    double A,B,C;
    A=ui->lineEdit->text().toDouble();
    B=ui->lineEdit_2->text().toDouble();
    C=A-B;

    ui->lineEdit_3->setText(QString::number(C));
}

void MainWindow::on_pushButton_2_clicked()
{
    double A,B,C;
    A=ui->lineEdit->text().toDouble();
    B=ui->lineEdit_2->text().toDouble();
    C=A*B;

    ui->lineEdit_3->setText(QString::number(C));
}

void MainWindow::on_pushButton_4_clicked()
{
    double A,B,C;
    A=ui->lineEdit->text().toDouble();
    B=ui->lineEdit_2->text().toDouble();
    C=A/B;

    ui->lineEdit_3->setText(QString::number(C));
}

void MainWindow::on_pushButton_5_clicked()
{
    ui->lineEdit->setText(QString::number(0));
    ui->lineEdit_2->setText(QString::number(0));
    ui->lineEdit_3->setText(QString::number(0));

}
