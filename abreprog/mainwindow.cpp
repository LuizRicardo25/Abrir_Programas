#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDesktopServices>
#include <QUrl>



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


void MainWindow::on_pushButton_clicked()
{
    QString link="https://www.linkedin.com";
    QDesktopServices::openUrl(QUrl(link));
}


void MainWindow::on_pushButton_2_clicked()
{
    QString link="file:///c:/Windows/notepad.exe";
    QDesktopServices::openUrl(QUrl(link));
}


void MainWindow::on_pushButton_3_clicked()
{
    QString link="file:///c:/Windows/WinSxS/wow64_microsoft-windows-calc_31bf3856ad364e35_10.0.17763.1_none_a4d89572a74625f4/calc.exe";
    QDesktopServices::openUrl(QUrl(link));
}

