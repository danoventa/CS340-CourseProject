#ifndef PAUSEPROFILE_H
#define PAUSEPROFILE_H
/*!This class will take information about characters class to update information
 *in the pause menu
*/
class PauseProfile: public QObject
{
    Q_OBJECT
public:
    PauseProfile(chracters info, Qbject *parent = 0);
    character getInfo();
public slots:

signals:
};

#endif // PAUSEPROFILE_H
