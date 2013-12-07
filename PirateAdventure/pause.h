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
    /** \class Pause class.h "inc/class.h"
     * \brief This is a Pause class.
     *      This class will build the pause menu on
     *      some key event.
     */
    Q_OBJECT

public:
    /**
     * @brief Pause constructor will create Pause Ui
     * @param   parent is passed to Pause Ui
     */
    explicit Pause(QWidget *parent = 0);
    ~Pause();



public slots:
    /**
     * @brief on_resume_clicked Resume game
     */
    void on_resume_clicked();
    /**
     * @brief on_exit_clicked Exits game
     */
    void on_exit_clicked();
    /**
     * @brief on_progressBar_valueChanged monitors health status
     *
     */
    void on_progressBar_valueChanged(int value);

private:
    Ui::Pause *ui;

};

#endif // PAUSE_H
