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
    void musicToggleRequested();

private:
    Ui::StartScreenWidget *ui;
};

#endif // STARTSCREENWIDGET_H
