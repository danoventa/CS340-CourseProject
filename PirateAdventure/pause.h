#ifndef PAUSE_H
#define PAUSE_H

#include <QDialog>
#include "Character.h"
#include <QtGui>
#include <QDialog>
#include <QtCore>
#include <QKeyEvent>
#include <QEvent>
#include "attackframe.h"



namespace Ui {

class Pause;
}

class Pause : public QDialog
{
    Q_OBJECT

public:
    /**
     * @brief Pause
     * @param parent
     */
    explicit Pause(QWidget *parent = 0);
    ~Pause();



public slots:
    /**
     * @brief on_resume_clicked
     */
    void on_resume_clicked();
    /**
     * @brief on_exit_clicked
     */
    void on_exit_clicked();
    /**
     * @brief on_progressBar_valueChanged
     * @param value
     */
    void on_progressBar_valueChanged(int value);

private:
    Ui::Pause *ui;

};

#endif // PAUSE_H
