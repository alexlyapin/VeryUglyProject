#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QtDebug>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    connect(ui->buttonCalculate, &QPushButton::clicked, this, &MainWindow::buttonClicked);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::buttonClicked()
{


    QString textA = ui->lineEditA->text();
    QString textB = ui->lineEditB->text();

    int a = textA.toInt();
    int b = textB.toInt();
    int result = a+b;

    ui->resultLabel->setText(QString::number(result));

    qDebug() << "Result" << result;
}


