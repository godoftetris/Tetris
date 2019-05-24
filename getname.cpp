#include "getname.h"
#include "ui_getname.h"
#include "app/functions.h"
#include "result.h"
#include "ui_widget.h"
#include "QProcess"
#include <QFile>
#include <QString>
#include <QCoreApplication>
#include <QTextStream>

Form::Form(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Form)
{
    ui->setupUi(this);

    restart = new resultat();
}

Form::~Form()
{
    delete ui;
}

void Form::on_backButton_clicked()
{
    this->close();      // Закрываем окно
    emit firstWindow(); // И вызываем сигнал на открытие главного окна
}

void Form::on_playButton_clicked()
{
   tetris();
   restart->show;
   this->close();
}
