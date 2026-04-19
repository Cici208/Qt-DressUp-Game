#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QPixmap>
#include <QPainter>

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

private:
    Ui::MainWindow *ui;
    QPixmap base, hair, dress, shoe;
    void updateCharacter();
};

#endif // MAINWINDOW_H
