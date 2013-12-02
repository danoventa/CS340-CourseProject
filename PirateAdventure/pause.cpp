#include "pause.h"
#include "ui_pause.h"
#include "Character.h"



Pause::Pause(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Pause)
{
    ui->setupUi(this);
    //I need the pointer to Hero so I can extract his health

    //save Parent Pointer
}

Pause::~Pause()
{
    delete ui;
}


void Pause::on_Resume_clicked()
{
   //hides window and main game should resume at same point
    this->hide();

}

void Pause::on_Exit_clicked()
{
    exit(-1);
}

