#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QPixmap>
#include <QPainter>
#include <QMediaPlayer>
#include <QAudioOutput>
#include "stickerlabel.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    bool eventFilter(QObject *watched, QEvent *event) override;

private slots:
    void selectHair();
    void selectDress();
    void selectShoe();
    void selectPerson1();
    void selectPerson2();
    void selectPerson3();
    void showGameScreen();
    void toggleMusic();
    void goBackToStartScreen();
    void clearAllOutfits();
    void randomOutfit();
    void on_btnBg1_clicked();
    void on_btnBg2_clicked();
    void on_btnBg3_clicked();

    void takePhoto(); // 必须和我写的一模一样！大小写不能错！

private:
    Ui::MainWindow *ui;
    QPixmap base, hair, dress, shoe;
    void updateCharacter();

    QMediaPlayer *m_bgmPlayer;
    QAudioOutput *m_audioOutput;
    bool isDragging;
    QPoint dragOffset;
    QLabel *dragLabel;

    QPixmap currentPhotoBg;
    void addStickerToBar(QWidget *container, const QString &imagePath);
};

#endif // MAINWINDOW_H
