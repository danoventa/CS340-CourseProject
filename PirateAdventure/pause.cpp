#include "pause.h"
#include "ui_pause.h"
<<<<<<< HEAD
=======
//#include "Character.h"


>>>>>>> 9f3e80f7f57c8da55947a08f95ce7de759b80837

Pause::Pause(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Pause)
{
    ui->setupUi(this);
}

Pause::~Pause()
{
    delete ui;
}
