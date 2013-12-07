/********************************************************************************
** Form generated from reading UI file 'pause.ui'
**
** Created by: Qt User Interface Compiler version 5.1.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PAUSE_H
#define UI_PAUSE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Pause
{
public:
    QLabel *pirate;
    QProgressBar *progressBar;
    QLCDNumber *lcdNumber;
    QTabWidget *Weapons;
    QWidget *getAmmo;
    QPushButton *incSwordDamage;
    QPushButton *incGunDamage;
    QPushButton *incHookDamage;
    QPushButton *incBrokenGunDamage;
    QWidget *getHealth;
    QPushButton *restoreHealth;
    QPushButton *incHealth;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *resume;
    QSpacerItem *horizontalSpacer;
    QPushButton *exit;

    void setupUi(QDialog *Pause)
    {
        if (Pause->objectName().isEmpty())
            Pause->setObjectName(QStringLiteral("Pause"));
        Pause->resize(565, 407);
        Pause->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        pirate = new QLabel(Pause);
        pirate->setObjectName(QStringLiteral("pirate"));
        pirate->setGeometry(QRect(10, 10, 201, 151));
        pirate->setPixmap(QPixmap(QString::fromUtf8("../images/pirate.gif")));
        pirate->setScaledContents(true);
        progressBar = new QProgressBar(Pause);
        progressBar->setObjectName(QStringLiteral("progressBar"));
        progressBar->setGeometry(QRect(270, 90, 118, 23));
        progressBar->setMaximum(100);
        progressBar->setValue(50);
        progressBar->setTextVisible(true);
        lcdNumber = new QLCDNumber(Pause);
        lcdNumber->setObjectName(QStringLiteral("lcdNumber"));
        lcdNumber->setGeometry(QRect(270, 50, 64, 23));
        lcdNumber->setFrameShadow(QFrame::Raised);
        lcdNumber->setDigitCount(3);
        lcdNumber->setSegmentStyle(QLCDNumber::Outline);
        lcdNumber->setProperty("intValue", QVariant(50));
        Weapons = new QTabWidget(Pause);
        Weapons->setObjectName(QStringLiteral("Weapons"));
        Weapons->setGeometry(QRect(10, 170, 551, 151));
        getAmmo = new QWidget();
        getAmmo->setObjectName(QStringLiteral("getAmmo"));
        incSwordDamage = new QPushButton(getAmmo);
        incSwordDamage->setObjectName(QStringLiteral("incSwordDamage"));
        incSwordDamage->setGeometry(QRect(14, 8, 241, 21));
        incSwordDamage->setStyleSheet(QStringLiteral("background-color: qconicalgradient(cx:0.5, cy:0.5, angle:176.9, stop:0 rgba(194, 255, 255, 255));"));
        incGunDamage = new QPushButton(getAmmo);
        incGunDamage->setObjectName(QStringLiteral("incGunDamage"));
        incGunDamage->setGeometry(QRect(10, 60, 251, 23));
        incGunDamage->setStyleSheet(QStringLiteral("background-color: qconicalgradient(cx:0.5, cy:0.5, angle:176.9, stop:0 rgba(194, 255, 255, 255));"));
        incHookDamage = new QPushButton(getAmmo);
        incHookDamage->setObjectName(QStringLiteral("incHookDamage"));
        incHookDamage->setGeometry(QRect(300, 10, 221, 23));
        incHookDamage->setStyleSheet(QStringLiteral("background-color: qconicalgradient(cx:0.5, cy:0.5, angle:176.9, stop:0 rgba(194, 255, 255, 255));"));
        incBrokenGunDamage = new QPushButton(getAmmo);
        incBrokenGunDamage->setObjectName(QStringLiteral("incBrokenGunDamage"));
        incBrokenGunDamage->setGeometry(QRect(300, 60, 221, 23));
        incBrokenGunDamage->setStyleSheet(QStringLiteral("background-color: qconicalgradient(cx:0.5, cy:0.5, angle:176.9, stop:0 rgba(194, 255, 255, 255));"));
        Weapons->addTab(getAmmo, QString());
        getHealth = new QWidget();
        getHealth->setObjectName(QStringLiteral("getHealth"));
        restoreHealth = new QPushButton(getHealth);
        restoreHealth->setObjectName(QStringLiteral("restoreHealth"));
        restoreHealth->setGeometry(QRect(80, 10, 381, 32));
        restoreHealth->setStyleSheet(QStringLiteral("background-color: qconicalgradient(cx:0.5, cy:0.5, angle:176.9, stop:0 rgba(194, 255, 255, 255));"));
        incHealth = new QPushButton(getHealth);
        incHealth->setObjectName(QStringLiteral("incHealth"));
        incHealth->setGeometry(QRect(80, 60, 381, 32));
        incHealth->setStyleSheet(QStringLiteral("background-color: qconicalgradient(cx:0.5, cy:0.5, angle:176.9, stop:0 rgba(194, 255, 255, 255));"));
        Weapons->addTab(getHealth, QString());
        layoutWidget = new QWidget(Pause);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(100, 330, 289, 32));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        resume = new QPushButton(layoutWidget);
        resume->setObjectName(QStringLiteral("resume"));

        horizontalLayout->addWidget(resume);

        horizontalSpacer = new QSpacerItem(118, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        exit = new QPushButton(layoutWidget);
        exit->setObjectName(QStringLiteral("exit"));

        horizontalLayout->addWidget(exit);


        retranslateUi(Pause);
        QObject::connect(progressBar, SIGNAL(valueChanged(int)), lcdNumber, SLOT(display(int)));

        Weapons->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(Pause);
    } // setupUi

    void retranslateUi(QDialog *Pause)
    {
        Pause->setWindowTitle(QApplication::translate("Pause", "Dialog", 0));
        pirate->setText(QString());
        progressBar->setFormat(QApplication::translate("Pause", "%v%", 0));
        incSwordDamage->setText(QApplication::translate("Pause", "Increase Sword Slasher Damage", 0));
        incGunDamage->setText(QApplication::translate("Pause", "Increase Gun Damage", 0));
        incHookDamage->setText(QApplication::translate("Pause", "Increase Hook Slash Damage", 0));
        incBrokenGunDamage->setText(QApplication::translate("Pause", "Increase Broken Gun Damage", 0));
        Weapons->setTabText(Weapons->indexOf(getAmmo), QApplication::translate("Pause", "Weapons", 0));
        restoreHealth->setText(QApplication::translate("Pause", "Restore Health", 0));
        incHealth->setText(QApplication::translate("Pause", "Increase Health", 0));
        Weapons->setTabText(Weapons->indexOf(getHealth), QApplication::translate("Pause", "Health", 0));
        resume->setText(QApplication::translate("Pause", "Resume", 0));
        exit->setText(QApplication::translate("Pause", "Exit", 0));
    } // retranslateUi

};

namespace Ui {
    class Pause: public Ui_Pause {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PAUSE_H
