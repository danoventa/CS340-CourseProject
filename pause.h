#ifndef PAUSE_H
#define PAUSE_H
#include <QObject>

class pause : public QObject
 {
    Q_OBJECT

 public:
     pause(Character info, QObject *parent = 0);
     Character getInfo();

 public slots:


 signals:

};

#endif
