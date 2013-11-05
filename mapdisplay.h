#ifndef MAPDISPLAY_H
#define MAPDISPLAY_H

#include <QDialog>

namespace Ui {
class mapdisplay;
}

class mapdisplay : public QDialog
{
    Q_OBJECT

public:
    explicit mapdisplay(QWidget *parent = 0);
    ~mapdisplay();

private:
    Ui::mapdisplay *ui;
};

#endif // MAPDISPLAY_H
