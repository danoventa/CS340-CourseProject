#include "pause.h"
#include "ui_pause.h"
#incldue "Character.h"

Pause::Pause(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Pause)
{
    ui->setupUi(this);
    //I need the pointer to Hero so I can extract his health
    ui->numericHealth->connect()
}

Pause::~Pause()
{
    delete ui;
}


void Pause::on_Resume_clicked()
{

}

//void Pause::on_Exit_clicked()
//{

//}
