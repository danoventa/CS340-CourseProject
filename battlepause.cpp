#include "battlepause.h"
#include "ui_battlepause.h"

BattlePause::BattlePause(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::BattlePause)
{
    ui->setupUi(this);
}

BattlePause::~BattlePause()
{
    delete ui;
}

void BattlePause::on_pushButton_clicked()
{
    this->hide ();
}
