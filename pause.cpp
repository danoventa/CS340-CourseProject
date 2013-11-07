#include "pause.h"
#include "ui_pause.h"

Pause::Pause(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Pause)
{
    ui->setupUi(this);
}

Pause::~Pause()
{
    delete ui;
}

void Pause::on_Resume_clicked()
{

}

void Pause::on_Exit_clicked()
{

}
