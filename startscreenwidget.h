#ifndef STARTSCREENWIDGET_H
#define STARTSCREENWIDGET_H

#include <QWidget>

QT_BEGIN_NAMESPACE
namespace Ui { class StartScreenWidget; }
QT_END_NAMESPACE

class StartScreenWidget : public QWidget
{
    Q_OBJECT
public:
    explicit StartScreenWidget(QWidget *parent = nullptr);
    ~StartScreenWidget();

signals:
    void startGameClicked();

private:
    Ui::StartScreenWidget *ui;
    // 所有动画相关变量/函数 全部删掉！
};

#endif // STARTSCREENWIDGET_H
