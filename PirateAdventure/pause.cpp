#include "pause.h"
#include "ui_pause.h"
#include "Character.h"

/**
 * @brief Pause::Pause constructor to build Pause menu
 * @param parent pointer from main window
 */
Pause::Pause(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Pause)
{
    ui->setupUi(this);

}
/**
 * @brief Pause::~Pause Pause destructor
 */
Pause::~Pause()
{
    delete ui;
}
/**
 * @brief Pause::on_resume_clicked resume game
 */
void Pause::on_resume_clicked()
{
    this->hide();
}
/**
 * @brief Pause::on_exit_clicked exit game
 */
void Pause::on_exit_clicked()
{
    exit(0);
}

void Pause::on_progressBar_valueChanged(int value)
{
    value=hero->getHP();
}
