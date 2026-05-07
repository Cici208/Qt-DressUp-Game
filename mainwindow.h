#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QPixmap>
#include <QPainter>
#include <QMediaPlayer>
#include <QAudioOutput>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void selectHair();
    void selectDress();
    void selectShoe();
    void selectPerson1();
    void selectPerson2();
    void selectPerson3();
    void showGameScreen();
    void toggleMusic();
    // ========== 新增：三个按钮的槽函数声明 ==========
    void goBackToStartScreen();  // 返回开屏界面
    void clearAllOutfits();      // 清空搭配
    void randomOutfit();         // 随机搭配

private:
    Ui::MainWindow *ui;
    QPixmap base, hair, dress, shoe;
    void updateCharacter();

    QMediaPlayer *m_bgmPlayer;
    QAudioOutput *m_audioOutput;
};

#endif // MAINWINDOW_H
