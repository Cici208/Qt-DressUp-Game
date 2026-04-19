/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.10.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLabel *personLabel;
    QPushButton *btnPerson1;
    QPushButton *btnPerson2;
    QPushButton *btnPerson3;
    QTabWidget *tabWidget;
    QWidget *tab;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QGridLayout *gridLayout;
    QPushButton *hair6;
    QPushButton *hair5;
    QPushButton *hair7;
    QPushButton *hair3;
    QPushButton *hair4;
    QPushButton *hair2;
    QPushButton *hair1;
    QPushButton *hair8;
    QPushButton *hair9;
    QWidget *tab_2;
    QScrollArea *scrollArea_2;
    QWidget *scrollAreaWidgetContents_2;
    QGridLayout *gridLayout_2;
    QPushButton *dress9;
    QPushButton *dress8;
    QPushButton *dress2;
    QPushButton *dress5;
    QPushButton *dress7;
    QPushButton *dress4;
    QPushButton *dress3;
    QPushButton *dress1;
    QPushButton *dress6;
    QPushButton *dress10;
    QWidget *tab_3;
    QScrollArea *scrollArea_5;
    QWidget *scrollAreaWidgetContents_5;
    QGridLayout *gridLayout_5;
    QPushButton *shoe3;
    QPushButton *shoe1;
    QPushButton *shoe2;
    QPushButton *shoe4;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 600);
        MainWindow->setStyleSheet(QString::fromUtf8("background-image:url(:/images/bg_room.jpg);\n"
"background-repeat:no-repeat;\n"
"background-position:center;\n"
"background-size:cover;"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        centralwidget->setStyleSheet(QString::fromUtf8("background-image:url(:/images/bg_room.jpg);\n"
"background-repeat:no-repeat;\n"
"background-position:center;\n"
"background-size:cover;"));
        personLabel = new QLabel(centralwidget);
        personLabel->setObjectName("personLabel");
        personLabel->setGeometry(QRect(30, 140, 391, 421));
        personLabel->setMinimumSize(QSize(300, 400));
        personLabel->setStyleSheet(QString::fromUtf8("background: transparent;"));
        personLabel->setScaledContents(true);
        btnPerson1 = new QPushButton(centralwidget);
        btnPerson1->setObjectName("btnPerson1");
        btnPerson1->setGeometry(QRect(10, 10, 81, 94));
        btnPerson1->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    qproperty-alignment: AlignCenter;\n"
"    border-radius: 6px;\n"
"    border: 2px solid white;\n"
"    background-color: rgba(255,255,255,0.15);\n"
"    min-width: 70px;\n"
"    min-height: 90px;\n"
"    icon-size: 60px 80px; /* \345\260\217\344\272\272\345\233\276\347\211\207\347\274\251\345\260\217 */\n"
"}\n"
"QPushButton:hover {\n"
"    border: 2px solid #ffb6d9;\n"
"    background-color: rgba(255,182,217,0.25);\n"
"}\n"
"QPushButton:pressed {\n"
"    border: 2px solid #ff88bb;\n"
"}"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/person1.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        btnPerson1->setIcon(icon);
        btnPerson2 = new QPushButton(centralwidget);
        btnPerson2->setObjectName("btnPerson2");
        btnPerson2->setGeometry(QRect(100, 10, 81, 94));
        btnPerson2->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    qproperty-alignment: AlignCenter;\n"
"    border-radius: 6px;\n"
"    border: 2px solid white;\n"
"    background-color: rgba(255,255,255,0.15);\n"
"    min-width: 70px;\n"
"    min-height: 90px;\n"
"    icon-size: 60px 80px; /* \345\260\217\344\272\272\345\233\276\347\211\207\347\274\251\345\260\217 */\n"
"}\n"
"QPushButton:hover {\n"
"    border: 2px solid #ffb6d9;\n"
"    background-color: rgba(255,182,217,0.25);\n"
"}\n"
"QPushButton:pressed {\n"
"    border: 2px solid #ff88bb;\n"
"}"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/images/person2.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        btnPerson2->setIcon(icon1);
        btnPerson3 = new QPushButton(centralwidget);
        btnPerson3->setObjectName("btnPerson3");
        btnPerson3->setGeometry(QRect(190, 10, 81, 94));
        btnPerson3->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    qproperty-alignment: AlignCenter;\n"
"    border-radius: 6px;\n"
"    border: 2px solid white;\n"
"    background-color: rgba(255,255,255,0.15);\n"
"    min-width: 70px;\n"
"    min-height: 90px;\n"
"    icon-size: 60px 80px; /* \345\260\217\344\272\272\345\233\276\347\211\207\347\274\251\345\260\217 */\n"
"}\n"
"QPushButton:hover {\n"
"    border: 2px solid #ffb6d9;\n"
"    background-color: rgba(255,182,217,0.25);\n"
"}\n"
"QPushButton:pressed {\n"
"    border: 2px solid #ff88bb;\n"
"}"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/images/person3.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        btnPerson3->setIcon(icon2);
        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName("tabWidget");
        tabWidget->setGeometry(QRect(420, 20, 351, 521));
        tabWidget->setStyleSheet(QString::fromUtf8(""));
        tab = new QWidget();
        tab->setObjectName("tab");
        scrollArea = new QScrollArea(tab);
        scrollArea->setObjectName("scrollArea");
        scrollArea->setGeometry(QRect(30, 30, 291, 421));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName("scrollAreaWidgetContents");
        scrollAreaWidgetContents->setGeometry(QRect(0, -851, 275, 1272));
        gridLayout = new QGridLayout(scrollAreaWidgetContents);
        gridLayout->setObjectName("gridLayout");
        hair6 = new QPushButton(scrollAreaWidgetContents);
        hair6->setObjectName("hair6");
        hair6->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    qproperty-alignment: AlignCenter;\n"
"    border-radius: 8px;\n"
"    border: 2px solid white;\n"
"    background-color: rgba(255,255,255,0.15);\n"
"    min-width: 110px;\n"
"    min-height: 130px;\n"
"    icon-size: 95px 105px;\n"
"}\n"
"/* \351\274\240\346\240\207\346\202\254\346\265\256\344\270\212\345\216\273 \342\206\222 \347\262\211\350\211\262\351\253\230\344\272\256\357\274\210\344\275\240\350\246\201\347\232\204\346\225\210\346\236\234\357\274\211 */\n"
"QPushButton:hover {\n"
"    border: 2px solid #ffb6d9;\n"
"    background-color: rgba(255,182,217,0.25);\n"
"}\n"
"/* \347\202\271\345\207\273\347\236\254\351\227\264\350\275\273\345\276\256\345\217\230\350\211\262\357\274\214\344\270\215\344\277\235\347\225\231\346\241\206 */\n"
"QPushButton:pressed {\n"
"    border: 2px solid #ff88bb;\n"
"}"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/images/hair6_thumb.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        hair6->setIcon(icon3);
        hair6->setCheckable(false);

        gridLayout->addWidget(hair6, 5, 0, 1, 1);

        hair5 = new QPushButton(scrollAreaWidgetContents);
        hair5->setObjectName("hair5");
        hair5->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    qproperty-alignment: AlignCenter;\n"
"    border-radius: 8px;\n"
"    border: 2px solid white;\n"
"    background-color: rgba(255,255,255,0.15);\n"
"    min-width: 110px;\n"
"    min-height: 130px;\n"
"    icon-size: 95px 105px;\n"
"}\n"
"/* \351\274\240\346\240\207\346\202\254\346\265\256\344\270\212\345\216\273 \342\206\222 \347\262\211\350\211\262\351\253\230\344\272\256\357\274\210\344\275\240\350\246\201\347\232\204\346\225\210\346\236\234\357\274\211 */\n"
"QPushButton:hover {\n"
"    border: 2px solid #ffb6d9;\n"
"    background-color: rgba(255,182,217,0.25);\n"
"}\n"
"/* \347\202\271\345\207\273\347\236\254\351\227\264\350\275\273\345\276\256\345\217\230\350\211\262\357\274\214\344\270\215\344\277\235\347\225\231\346\241\206 */\n"
"QPushButton:pressed {\n"
"    border: 2px solid #ff88bb;\n"
"}"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/images/hair5_thumb.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        hair5->setIcon(icon4);
        hair5->setCheckable(false);

        gridLayout->addWidget(hair5, 4, 0, 1, 1);

        hair7 = new QPushButton(scrollAreaWidgetContents);
        hair7->setObjectName("hair7");
        hair7->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    qproperty-alignment: AlignCenter;\n"
"    border-radius: 8px;\n"
"    border: 2px solid white;\n"
"    background-color: rgba(255,255,255,0.15);\n"
"    min-width: 110px;\n"
"    min-height: 130px;\n"
"    icon-size: 95px 105px;\n"
"}\n"
"/* \351\274\240\346\240\207\346\202\254\346\265\256\344\270\212\345\216\273 \342\206\222 \347\262\211\350\211\262\351\253\230\344\272\256\357\274\210\344\275\240\350\246\201\347\232\204\346\225\210\346\236\234\357\274\211 */\n"
"QPushButton:hover {\n"
"    border: 2px solid #ffb6d9;\n"
"    background-color: rgba(255,182,217,0.25);\n"
"}\n"
"/* \347\202\271\345\207\273\347\236\254\351\227\264\350\275\273\345\276\256\345\217\230\350\211\262\357\274\214\344\270\215\344\277\235\347\225\231\346\241\206 */\n"
"QPushButton:pressed {\n"
"    border: 2px solid #ff88bb;\n"
"}"));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/images/hair7_thumb.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        hair7->setIcon(icon5);
        hair7->setCheckable(false);

        gridLayout->addWidget(hair7, 6, 0, 1, 1);

        hair3 = new QPushButton(scrollAreaWidgetContents);
        hair3->setObjectName("hair3");
        hair3->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    qproperty-alignment: AlignCenter;\n"
"    border-radius: 8px;\n"
"    border: 2px solid white;\n"
"    background-color: rgba(255,255,255,0.15);\n"
"    min-width: 110px;\n"
"    min-height: 130px;\n"
"    icon-size: 95px 105px;\n"
"}\n"
"/* \351\274\240\346\240\207\346\202\254\346\265\256\344\270\212\345\216\273 \342\206\222 \347\262\211\350\211\262\351\253\230\344\272\256\357\274\210\344\275\240\350\246\201\347\232\204\346\225\210\346\236\234\357\274\211 */\n"
"QPushButton:hover {\n"
"    border: 2px solid #ffb6d9;\n"
"    background-color: rgba(255,182,217,0.25);\n"
"}\n"
"/* \347\202\271\345\207\273\347\236\254\351\227\264\350\275\273\345\276\256\345\217\230\350\211\262\357\274\214\344\270\215\344\277\235\347\225\231\346\241\206 */\n"
"QPushButton:pressed {\n"
"    border: 2px solid #ff88bb;\n"
"}"));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/images/hair3_thumb.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        hair3->setIcon(icon6);
        hair3->setCheckable(false);

        gridLayout->addWidget(hair3, 2, 0, 1, 1);

        hair4 = new QPushButton(scrollAreaWidgetContents);
        hair4->setObjectName("hair4");
        hair4->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    qproperty-alignment: AlignCenter;\n"
"    border-radius: 8px;\n"
"    border: 2px solid white;\n"
"    background-color: rgba(255,255,255,0.15);\n"
"    min-width: 110px;\n"
"    min-height: 130px;\n"
"    icon-size: 95px 105px;\n"
"}\n"
"/* \351\274\240\346\240\207\346\202\254\346\265\256\344\270\212\345\216\273 \342\206\222 \347\262\211\350\211\262\351\253\230\344\272\256\357\274\210\344\275\240\350\246\201\347\232\204\346\225\210\346\236\234\357\274\211 */\n"
"QPushButton:hover {\n"
"    border: 2px solid #ffb6d9;\n"
"    background-color: rgba(255,182,217,0.25);\n"
"}\n"
"/* \347\202\271\345\207\273\347\236\254\351\227\264\350\275\273\345\276\256\345\217\230\350\211\262\357\274\214\344\270\215\344\277\235\347\225\231\346\241\206 */\n"
"QPushButton:pressed {\n"
"    border: 2px solid #ff88bb;\n"
"}"));
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/images/hair4_thumb.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        hair4->setIcon(icon7);
        hair4->setCheckable(false);

        gridLayout->addWidget(hair4, 3, 0, 1, 1);

        hair2 = new QPushButton(scrollAreaWidgetContents);
        hair2->setObjectName("hair2");
        hair2->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    qproperty-alignment: AlignCenter;\n"
"    border-radius: 8px;\n"
"    border: 2px solid white;\n"
"    background-color: rgba(255,255,255,0.15);\n"
"    min-width: 110px;\n"
"    min-height: 130px;\n"
"    icon-size: 95px 105px;\n"
"}\n"
"/* \351\274\240\346\240\207\346\202\254\346\265\256\344\270\212\345\216\273 \342\206\222 \347\262\211\350\211\262\351\253\230\344\272\256\357\274\210\344\275\240\350\246\201\347\232\204\346\225\210\346\236\234\357\274\211 */\n"
"QPushButton:hover {\n"
"    border: 2px solid #ffb6d9;\n"
"    background-color: rgba(255,182,217,0.25);\n"
"}\n"
"/* \347\202\271\345\207\273\347\236\254\351\227\264\350\275\273\345\276\256\345\217\230\350\211\262\357\274\214\344\270\215\344\277\235\347\225\231\346\241\206 */\n"
"QPushButton:pressed {\n"
"    border: 2px solid #ff88bb;\n"
"}"));
        QIcon icon8;
        icon8.addFile(QString::fromUtf8(":/images/hair2_thumb.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        hair2->setIcon(icon8);
        hair2->setCheckable(false);

        gridLayout->addWidget(hair2, 1, 0, 1, 1);

        hair1 = new QPushButton(scrollAreaWidgetContents);
        hair1->setObjectName("hair1");
        hair1->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    qproperty-alignment: AlignCenter;\n"
"    border-radius: 8px;\n"
"    border: 2px solid white;\n"
"    background-color: rgba(255,255,255,0.15);\n"
"    min-width: 110px;\n"
"    min-height: 130px;\n"
"    icon-size: 95px 105px;\n"
"}\n"
"/* \351\274\240\346\240\207\346\202\254\346\265\256\344\270\212\345\216\273 \342\206\222 \347\262\211\350\211\262\351\253\230\344\272\256\357\274\210\344\275\240\350\246\201\347\232\204\346\225\210\346\236\234\357\274\211 */\n"
"QPushButton:hover {\n"
"    border: 2px solid #ffb6d9;\n"
"    background-color: rgba(255,182,217,0.25);\n"
"}\n"
"/* \347\202\271\345\207\273\347\236\254\351\227\264\350\275\273\345\276\256\345\217\230\350\211\262\357\274\214\344\270\215\344\277\235\347\225\231\346\241\206 */\n"
"QPushButton:pressed {\n"
"    border: 2px solid #ff88bb;\n"
"}"));
        QIcon icon9;
        icon9.addFile(QString::fromUtf8(":/images/hair1_thumb.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        hair1->setIcon(icon9);
        hair1->setCheckable(false);

        gridLayout->addWidget(hair1, 0, 0, 1, 1);

        hair8 = new QPushButton(scrollAreaWidgetContents);
        hair8->setObjectName("hair8");
        hair8->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    qproperty-alignment: AlignCenter;\n"
"    border-radius: 8px;\n"
"    border: 2px solid white;\n"
"    background-color: rgba(255,255,255,0.15);\n"
"    min-width: 110px;\n"
"    min-height: 130px;\n"
"    icon-size: 95px 105px;\n"
"}\n"
"/* \351\274\240\346\240\207\346\202\254\346\265\256\344\270\212\345\216\273 \342\206\222 \347\262\211\350\211\262\351\253\230\344\272\256\357\274\210\344\275\240\350\246\201\347\232\204\346\225\210\346\236\234\357\274\211 */\n"
"QPushButton:hover {\n"
"    border: 2px solid #ffb6d9;\n"
"    background-color: rgba(255,182,217,0.25);\n"
"}\n"
"/* \347\202\271\345\207\273\347\236\254\351\227\264\350\275\273\345\276\256\345\217\230\350\211\262\357\274\214\344\270\215\344\277\235\347\225\231\346\241\206 */\n"
"QPushButton:pressed {\n"
"    border: 2px solid #ff88bb;\n"
"}"));
        QIcon icon10;
        icon10.addFile(QString::fromUtf8(":/images/hair8_thumb.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        hair8->setIcon(icon10);
        hair8->setCheckable(false);

        gridLayout->addWidget(hair8, 7, 0, 1, 1);

        hair9 = new QPushButton(scrollAreaWidgetContents);
        hair9->setObjectName("hair9");
        hair9->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    qproperty-alignment: AlignCenter;\n"
"    border-radius: 8px;\n"
"    border: 2px solid white;\n"
"    background-color: rgba(255,255,255,0.15);\n"
"    min-width: 110px;\n"
"    min-height: 130px;\n"
"    icon-size: 95px 105px;\n"
"}\n"
"/* \351\274\240\346\240\207\346\202\254\346\265\256\344\270\212\345\216\273 \342\206\222 \347\262\211\350\211\262\351\253\230\344\272\256\357\274\210\344\275\240\350\246\201\347\232\204\346\225\210\346\236\234\357\274\211 */\n"
"QPushButton:hover {\n"
"    border: 2px solid #ffb6d9;\n"
"    background-color: rgba(255,182,217,0.25);\n"
"}\n"
"/* \347\202\271\345\207\273\347\236\254\351\227\264\350\275\273\345\276\256\345\217\230\350\211\262\357\274\214\344\270\215\344\277\235\347\225\231\346\241\206 */\n"
"QPushButton:pressed {\n"
"    border: 2px solid #ff88bb;\n"
"}"));
        QIcon icon11;
        icon11.addFile(QString::fromUtf8(":/images/hair9_thumb.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        hair9->setIcon(icon11);
        hair9->setCheckable(false);

        gridLayout->addWidget(hair9, 8, 0, 1, 1);

        scrollArea->setWidget(scrollAreaWidgetContents);
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName("tab_2");
        scrollArea_2 = new QScrollArea(tab_2);
        scrollArea_2->setObjectName("scrollArea_2");
        scrollArea_2->setGeometry(QRect(30, 30, 291, 421));
        scrollArea_2->setWidgetResizable(true);
        scrollAreaWidgetContents_2 = new QWidget();
        scrollAreaWidgetContents_2->setObjectName("scrollAreaWidgetContents_2");
        scrollAreaWidgetContents_2->setGeometry(QRect(0, 0, 275, 1412));
        gridLayout_2 = new QGridLayout(scrollAreaWidgetContents_2);
        gridLayout_2->setObjectName("gridLayout_2");
        dress9 = new QPushButton(scrollAreaWidgetContents_2);
        dress9->setObjectName("dress9");
        dress9->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    qproperty-alignment: AlignCenter;\n"
"    border-radius: 8px;\n"
"    border: 2px solid white;\n"
"    background-color: rgba(255,255,255,0.15);\n"
"    min-width: 110px;\n"
"    min-height: 130px;\n"
"    icon-size: 95px 105px;\n"
"}\n"
"/* \351\274\240\346\240\207\346\202\254\346\265\256\344\270\212\345\216\273 \342\206\222 \347\262\211\350\211\262\351\253\230\344\272\256\357\274\210\344\275\240\350\246\201\347\232\204\346\225\210\346\236\234\357\274\211 */\n"
"QPushButton:hover {\n"
"    border: 2px solid #ffb6d9;\n"
"    background-color: rgba(255,182,217,0.25);\n"
"}\n"
"/* \347\202\271\345\207\273\347\236\254\351\227\264\350\275\273\345\276\256\345\217\230\350\211\262\357\274\214\344\270\215\344\277\235\347\225\231\346\241\206 */\n"
"QPushButton:pressed {\n"
"    border: 2px solid #ff88bb;\n"
"}"));
        QIcon icon12;
        icon12.addFile(QString::fromUtf8(":/images/dress9_thumb.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        dress9->setIcon(icon12);
        dress9->setCheckable(false);

        gridLayout_2->addWidget(dress9, 8, 0, 1, 1);

        dress8 = new QPushButton(scrollAreaWidgetContents_2);
        dress8->setObjectName("dress8");
        dress8->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    qproperty-alignment: AlignCenter;\n"
"    border-radius: 8px;\n"
"    border: 2px solid white;\n"
"    background-color: rgba(255,255,255,0.15);\n"
"    min-width: 110px;\n"
"    min-height: 130px;\n"
"    icon-size: 95px 105px;\n"
"}\n"
"/* \351\274\240\346\240\207\346\202\254\346\265\256\344\270\212\345\216\273 \342\206\222 \347\262\211\350\211\262\351\253\230\344\272\256\357\274\210\344\275\240\350\246\201\347\232\204\346\225\210\346\236\234\357\274\211 */\n"
"QPushButton:hover {\n"
"    border: 2px solid #ffb6d9;\n"
"    background-color: rgba(255,182,217,0.25);\n"
"}\n"
"/* \347\202\271\345\207\273\347\236\254\351\227\264\350\275\273\345\276\256\345\217\230\350\211\262\357\274\214\344\270\215\344\277\235\347\225\231\346\241\206 */\n"
"QPushButton:pressed {\n"
"    border: 2px solid #ff88bb;\n"
"}"));
        QIcon icon13;
        icon13.addFile(QString::fromUtf8(":/images/dress8_thumb.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        dress8->setIcon(icon13);
        dress8->setCheckable(false);

        gridLayout_2->addWidget(dress8, 7, 0, 1, 1);

        dress2 = new QPushButton(scrollAreaWidgetContents_2);
        dress2->setObjectName("dress2");
        dress2->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    qproperty-alignment: AlignCenter;\n"
"    border-radius: 8px;\n"
"    border: 2px solid white;\n"
"    background-color: rgba(255,255,255,0.15);\n"
"    min-width: 110px;\n"
"    min-height: 130px;\n"
"    icon-size: 95px 105px;\n"
"}\n"
"/* \351\274\240\346\240\207\346\202\254\346\265\256\344\270\212\345\216\273 \342\206\222 \347\262\211\350\211\262\351\253\230\344\272\256\357\274\210\344\275\240\350\246\201\347\232\204\346\225\210\346\236\234\357\274\211 */\n"
"QPushButton:hover {\n"
"    border: 2px solid #ffb6d9;\n"
"    background-color: rgba(255,182,217,0.25);\n"
"}\n"
"/* \347\202\271\345\207\273\347\236\254\351\227\264\350\275\273\345\276\256\345\217\230\350\211\262\357\274\214\344\270\215\344\277\235\347\225\231\346\241\206 */\n"
"QPushButton:pressed {\n"
"    border: 2px solid #ff88bb;\n"
"}"));
        QIcon icon14;
        icon14.addFile(QString::fromUtf8(":/images/dress2_thumb.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        dress2->setIcon(icon14);
        dress2->setCheckable(false);

        gridLayout_2->addWidget(dress2, 1, 0, 1, 1);

        dress5 = new QPushButton(scrollAreaWidgetContents_2);
        dress5->setObjectName("dress5");
        dress5->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    qproperty-alignment: AlignCenter;\n"
"    border-radius: 8px;\n"
"    border: 2px solid white;\n"
"    background-color: rgba(255,255,255,0.15);\n"
"    min-width: 110px;\n"
"    min-height: 130px;\n"
"    icon-size: 95px 105px;\n"
"}\n"
"/* \351\274\240\346\240\207\346\202\254\346\265\256\344\270\212\345\216\273 \342\206\222 \347\262\211\350\211\262\351\253\230\344\272\256\357\274\210\344\275\240\350\246\201\347\232\204\346\225\210\346\236\234\357\274\211 */\n"
"QPushButton:hover {\n"
"    border: 2px solid #ffb6d9;\n"
"    background-color: rgba(255,182,217,0.25);\n"
"}\n"
"/* \347\202\271\345\207\273\347\236\254\351\227\264\350\275\273\345\276\256\345\217\230\350\211\262\357\274\214\344\270\215\344\277\235\347\225\231\346\241\206 */\n"
"QPushButton:pressed {\n"
"    border: 2px solid #ff88bb;\n"
"}"));
        QIcon icon15;
        icon15.addFile(QString::fromUtf8(":/images/dress5_thumb.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        dress5->setIcon(icon15);
        dress5->setCheckable(false);

        gridLayout_2->addWidget(dress5, 4, 0, 1, 1);

        dress7 = new QPushButton(scrollAreaWidgetContents_2);
        dress7->setObjectName("dress7");
        dress7->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    qproperty-alignment: AlignCenter;\n"
"    border-radius: 8px;\n"
"    border: 2px solid white;\n"
"    background-color: rgba(255,255,255,0.15);\n"
"    min-width: 110px;\n"
"    min-height: 130px;\n"
"    icon-size: 95px 105px;\n"
"}\n"
"/* \351\274\240\346\240\207\346\202\254\346\265\256\344\270\212\345\216\273 \342\206\222 \347\262\211\350\211\262\351\253\230\344\272\256\357\274\210\344\275\240\350\246\201\347\232\204\346\225\210\346\236\234\357\274\211 */\n"
"QPushButton:hover {\n"
"    border: 2px solid #ffb6d9;\n"
"    background-color: rgba(255,182,217,0.25);\n"
"}\n"
"/* \347\202\271\345\207\273\347\236\254\351\227\264\350\275\273\345\276\256\345\217\230\350\211\262\357\274\214\344\270\215\344\277\235\347\225\231\346\241\206 */\n"
"QPushButton:pressed {\n"
"    border: 2px solid #ff88bb;\n"
"}"));
        QIcon icon16;
        icon16.addFile(QString::fromUtf8(":/images/dress7_thumb.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        dress7->setIcon(icon16);
        dress7->setCheckable(false);

        gridLayout_2->addWidget(dress7, 6, 0, 1, 1);

        dress4 = new QPushButton(scrollAreaWidgetContents_2);
        dress4->setObjectName("dress4");
        dress4->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    qproperty-alignment: AlignCenter;\n"
"    border-radius: 8px;\n"
"    border: 2px solid white;\n"
"    background-color: rgba(255,255,255,0.15);\n"
"    min-width: 110px;\n"
"    min-height: 130px;\n"
"    icon-size: 95px 105px;\n"
"}\n"
"/* \351\274\240\346\240\207\346\202\254\346\265\256\344\270\212\345\216\273 \342\206\222 \347\262\211\350\211\262\351\253\230\344\272\256\357\274\210\344\275\240\350\246\201\347\232\204\346\225\210\346\236\234\357\274\211 */\n"
"QPushButton:hover {\n"
"    border: 2px solid #ffb6d9;\n"
"    background-color: rgba(255,182,217,0.25);\n"
"}\n"
"/* \347\202\271\345\207\273\347\236\254\351\227\264\350\275\273\345\276\256\345\217\230\350\211\262\357\274\214\344\270\215\344\277\235\347\225\231\346\241\206 */\n"
"QPushButton:pressed {\n"
"    border: 2px solid #ff88bb;\n"
"}"));
        QIcon icon17;
        icon17.addFile(QString::fromUtf8(":/images/dress4_thumb.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        dress4->setIcon(icon17);
        dress4->setCheckable(false);

        gridLayout_2->addWidget(dress4, 3, 0, 1, 1);

        dress3 = new QPushButton(scrollAreaWidgetContents_2);
        dress3->setObjectName("dress3");
        dress3->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    qproperty-alignment: AlignCenter;\n"
"    border-radius: 8px;\n"
"    border: 2px solid white;\n"
"    background-color: rgba(255,255,255,0.15);\n"
"    min-width: 110px;\n"
"    min-height: 130px;\n"
"    icon-size: 95px 105px;\n"
"}\n"
"/* \351\274\240\346\240\207\346\202\254\346\265\256\344\270\212\345\216\273 \342\206\222 \347\262\211\350\211\262\351\253\230\344\272\256\357\274\210\344\275\240\350\246\201\347\232\204\346\225\210\346\236\234\357\274\211 */\n"
"QPushButton:hover {\n"
"    border: 2px solid #ffb6d9;\n"
"    background-color: rgba(255,182,217,0.25);\n"
"}\n"
"/* \347\202\271\345\207\273\347\236\254\351\227\264\350\275\273\345\276\256\345\217\230\350\211\262\357\274\214\344\270\215\344\277\235\347\225\231\346\241\206 */\n"
"QPushButton:pressed {\n"
"    border: 2px solid #ff88bb;\n"
"}"));
        QIcon icon18;
        icon18.addFile(QString::fromUtf8(":/images/dress3_thumb.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        dress3->setIcon(icon18);
        dress3->setCheckable(false);

        gridLayout_2->addWidget(dress3, 2, 0, 1, 1);

        dress1 = new QPushButton(scrollAreaWidgetContents_2);
        dress1->setObjectName("dress1");
        dress1->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    qproperty-alignment: AlignCenter;\n"
"    border-radius: 8px;\n"
"    border: 2px solid white;\n"
"    background-color: rgba(255,255,255,0.15);\n"
"    min-width: 110px;\n"
"    min-height: 130px;\n"
"    icon-size: 95px 105px;\n"
"}\n"
"/* \351\274\240\346\240\207\346\202\254\346\265\256\344\270\212\345\216\273 \342\206\222 \347\262\211\350\211\262\351\253\230\344\272\256\357\274\210\344\275\240\350\246\201\347\232\204\346\225\210\346\236\234\357\274\211 */\n"
"QPushButton:hover {\n"
"    border: 2px solid #ffb6d9;\n"
"    background-color: rgba(255,182,217,0.25);\n"
"}\n"
"/* \347\202\271\345\207\273\347\236\254\351\227\264\350\275\273\345\276\256\345\217\230\350\211\262\357\274\214\344\270\215\344\277\235\347\225\231\346\241\206 */\n"
"QPushButton:pressed {\n"
"    border: 2px solid #ff88bb;\n"
"}"));
        QIcon icon19;
        icon19.addFile(QString::fromUtf8(":/images/dress1_thumb.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        dress1->setIcon(icon19);
        dress1->setCheckable(false);

        gridLayout_2->addWidget(dress1, 0, 0, 1, 1);

        dress6 = new QPushButton(scrollAreaWidgetContents_2);
        dress6->setObjectName("dress6");
        dress6->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    qproperty-alignment: AlignCenter;\n"
"    border-radius: 8px;\n"
"    border: 2px solid white;\n"
"    background-color: rgba(255,255,255,0.15);\n"
"    min-width: 110px;\n"
"    min-height: 130px;\n"
"    icon-size: 95px 105px;\n"
"}\n"
"/* \351\274\240\346\240\207\346\202\254\346\265\256\344\270\212\345\216\273 \342\206\222 \347\262\211\350\211\262\351\253\230\344\272\256\357\274\210\344\275\240\350\246\201\347\232\204\346\225\210\346\236\234\357\274\211 */\n"
"QPushButton:hover {\n"
"    border: 2px solid #ffb6d9;\n"
"    background-color: rgba(255,182,217,0.25);\n"
"}\n"
"/* \347\202\271\345\207\273\347\236\254\351\227\264\350\275\273\345\276\256\345\217\230\350\211\262\357\274\214\344\270\215\344\277\235\347\225\231\346\241\206 */\n"
"QPushButton:pressed {\n"
"    border: 2px solid #ff88bb;\n"
"}"));
        QIcon icon20;
        icon20.addFile(QString::fromUtf8(":/images/dress6_thumb.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        dress6->setIcon(icon20);
        dress6->setCheckable(false);

        gridLayout_2->addWidget(dress6, 5, 0, 1, 1);

        dress10 = new QPushButton(scrollAreaWidgetContents_2);
        dress10->setObjectName("dress10");
        dress10->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    qproperty-alignment: AlignCenter;\n"
"    border-radius: 8px;\n"
"    border: 2px solid white;\n"
"    background-color: rgba(255,255,255,0.15);\n"
"    min-width: 110px;\n"
"    min-height: 130px;\n"
"    icon-size: 95px 105px;\n"
"}\n"
"/* \351\274\240\346\240\207\346\202\254\346\265\256\344\270\212\345\216\273 \342\206\222 \347\262\211\350\211\262\351\253\230\344\272\256\357\274\210\344\275\240\350\246\201\347\232\204\346\225\210\346\236\234\357\274\211 */\n"
"QPushButton:hover {\n"
"    border: 2px solid #ffb6d9;\n"
"    background-color: rgba(255,182,217,0.25);\n"
"}\n"
"/* \347\202\271\345\207\273\347\236\254\351\227\264\350\275\273\345\276\256\345\217\230\350\211\262\357\274\214\344\270\215\344\277\235\347\225\231\346\241\206 */\n"
"QPushButton:pressed {\n"
"    border: 2px solid #ff88bb;\n"
"}"));
        QIcon icon21;
        icon21.addFile(QString::fromUtf8(":/images/dress10_thumb.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        dress10->setIcon(icon21);
        dress10->setCheckable(false);

        gridLayout_2->addWidget(dress10, 9, 0, 1, 1);

        scrollArea_2->setWidget(scrollAreaWidgetContents_2);
        tabWidget->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName("tab_3");
        scrollArea_5 = new QScrollArea(tab_3);
        scrollArea_5->setObjectName("scrollArea_5");
        scrollArea_5->setGeometry(QRect(30, 30, 291, 421));
        scrollArea_5->setWidgetResizable(true);
        scrollAreaWidgetContents_5 = new QWidget();
        scrollAreaWidgetContents_5->setObjectName("scrollAreaWidgetContents_5");
        scrollAreaWidgetContents_5->setGeometry(QRect(0, 0, 275, 572));
        gridLayout_5 = new QGridLayout(scrollAreaWidgetContents_5);
        gridLayout_5->setObjectName("gridLayout_5");
        shoe3 = new QPushButton(scrollAreaWidgetContents_5);
        shoe3->setObjectName("shoe3");
        shoe3->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    qproperty-alignment: AlignCenter;\n"
"    border-radius: 8px;\n"
"    border: 2px solid white;\n"
"    background-color: rgba(255,255,255,0.15);\n"
"    min-width: 110px;\n"
"    min-height: 130px;\n"
"    icon-size: 95px 105px;\n"
"}\n"
"/* \351\274\240\346\240\207\346\202\254\346\265\256\344\270\212\345\216\273 \342\206\222 \347\262\211\350\211\262\351\253\230\344\272\256\357\274\210\344\275\240\350\246\201\347\232\204\346\225\210\346\236\234\357\274\211 */\n"
"QPushButton:hover {\n"
"    border: 2px solid #ffb6d9;\n"
"    background-color: rgba(255,182,217,0.25);\n"
"}\n"
"/* \347\202\271\345\207\273\347\236\254\351\227\264\350\275\273\345\276\256\345\217\230\350\211\262\357\274\214\344\270\215\344\277\235\347\225\231\346\241\206 */\n"
"QPushButton:pressed {\n"
"    border: 2px solid #ff88bb;\n"
"}"));
        QIcon icon22;
        icon22.addFile(QString::fromUtf8(":/images/shoe3_thumb.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        shoe3->setIcon(icon22);
        shoe3->setCheckable(false);

        gridLayout_5->addWidget(shoe3, 2, 0, 1, 1);

        shoe1 = new QPushButton(scrollAreaWidgetContents_5);
        shoe1->setObjectName("shoe1");
        shoe1->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    qproperty-alignment: AlignCenter;\n"
"    border-radius: 8px;\n"
"    border: 2px solid white;\n"
"    background-color: rgba(255,255,255,0.15);\n"
"    min-width: 110px;\n"
"    min-height: 130px;\n"
"    icon-size: 95px 105px;\n"
"}\n"
"/* \351\274\240\346\240\207\346\202\254\346\265\256\344\270\212\345\216\273 \342\206\222 \347\262\211\350\211\262\351\253\230\344\272\256\357\274\210\344\275\240\350\246\201\347\232\204\346\225\210\346\236\234\357\274\211 */\n"
"QPushButton:hover {\n"
"    border: 2px solid #ffb6d9;\n"
"    background-color: rgba(255,182,217,0.25);\n"
"}\n"
"/* \347\202\271\345\207\273\347\236\254\351\227\264\350\275\273\345\276\256\345\217\230\350\211\262\357\274\214\344\270\215\344\277\235\347\225\231\346\241\206 */\n"
"QPushButton:pressed {\n"
"    border: 2px solid #ff88bb;\n"
"}"));
        QIcon icon23;
        icon23.addFile(QString::fromUtf8(":/images/shoe1_thumb.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        shoe1->setIcon(icon23);
        shoe1->setCheckable(false);

        gridLayout_5->addWidget(shoe1, 0, 0, 1, 1);

        shoe2 = new QPushButton(scrollAreaWidgetContents_5);
        shoe2->setObjectName("shoe2");
        shoe2->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    qproperty-alignment: AlignCenter;\n"
"    border-radius: 8px;\n"
"    border: 2px solid white;\n"
"    background-color: rgba(255,255,255,0.15);\n"
"    min-width: 110px;\n"
"    min-height: 130px;\n"
"    icon-size: 95px 105px;\n"
"}\n"
"/* \351\274\240\346\240\207\346\202\254\346\265\256\344\270\212\345\216\273 \342\206\222 \347\262\211\350\211\262\351\253\230\344\272\256\357\274\210\344\275\240\350\246\201\347\232\204\346\225\210\346\236\234\357\274\211 */\n"
"QPushButton:hover {\n"
"    border: 2px solid #ffb6d9;\n"
"    background-color: rgba(255,182,217,0.25);\n"
"}\n"
"/* \347\202\271\345\207\273\347\236\254\351\227\264\350\275\273\345\276\256\345\217\230\350\211\262\357\274\214\344\270\215\344\277\235\347\225\231\346\241\206 */\n"
"QPushButton:pressed {\n"
"    border: 2px solid #ff88bb;\n"
"}"));
        QIcon icon24;
        icon24.addFile(QString::fromUtf8(":/images/shoe2_thumb.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        shoe2->setIcon(icon24);
        shoe2->setCheckable(false);

        gridLayout_5->addWidget(shoe2, 1, 0, 1, 1);

        shoe4 = new QPushButton(scrollAreaWidgetContents_5);
        shoe4->setObjectName("shoe4");
        shoe4->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    qproperty-alignment: AlignCenter;\n"
"    border-radius: 8px;\n"
"    border: 2px solid white;\n"
"    background-color: rgba(255,255,255,0.15);\n"
"    min-width: 110px;\n"
"    min-height: 130px;\n"
"    icon-size: 95px 105px;\n"
"}\n"
"/* \351\274\240\346\240\207\346\202\254\346\265\256\344\270\212\345\216\273 \342\206\222 \347\262\211\350\211\262\351\253\230\344\272\256\357\274\210\344\275\240\350\246\201\347\232\204\346\225\210\346\236\234\357\274\211 */\n"
"QPushButton:hover {\n"
"    border: 2px solid #ffb6d9;\n"
"    background-color: rgba(255,182,217,0.25);\n"
"}\n"
"/* \347\202\271\345\207\273\347\236\254\351\227\264\350\275\273\345\276\256\345\217\230\350\211\262\357\274\214\344\270\215\344\277\235\347\225\231\346\241\206 */\n"
"QPushButton:pressed {\n"
"    border: 2px solid #ff88bb;\n"
"}"));
        QIcon icon25;
        icon25.addFile(QString::fromUtf8(":/images/shoe4_thumb.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        shoe4->setIcon(icon25);
        shoe4->setCheckable(false);

        gridLayout_5->addWidget(shoe4, 3, 0, 1, 1);

        scrollArea_5->setWidget(scrollAreaWidgetContents_5);
        tabWidget->addTab(tab_3, QString());
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 21));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(2);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        personLabel->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        btnPerson1->setText(QString());
        btnPerson2->setText(QString());
        btnPerson3->setText(QString());
        hair6->setText(QString());
        hair5->setText(QString());
        hair7->setText(QString());
        hair3->setText(QString());
        hair4->setText(QString());
        hair2->setText(QString());
        hair1->setText(QString());
        hair8->setText(QString());
        hair9->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tab), QCoreApplication::translate("MainWindow", "\345\217\221\351\245\260", nullptr));
        dress9->setText(QString());
        dress8->setText(QString());
        dress2->setText(QString());
        dress5->setText(QString());
        dress7->setText(QString());
        dress4->setText(QString());
        dress3->setText(QString());
        dress1->setText(QString());
        dress6->setText(QString());
        dress10->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QCoreApplication::translate("MainWindow", "\350\243\231\345\255\220", nullptr));
        shoe3->setText(QString());
        shoe1->setText(QString());
        shoe2->setText(QString());
        shoe4->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QCoreApplication::translate("MainWindow", "\351\236\213\345\255\220", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
