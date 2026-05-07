#include "startscreenwidget.h"
#include "ui_startscreenwidget.h"

StartScreenWidget::StartScreenWidget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::StartScreenWidget)
{
    ui->setupUi(this);

    // 唯一一行代码：按钮透明（看不见，只能点击）
    this->setStyleSheet("QPushButton{background:transparent; border:none;}");

    // 唯一功能：点击开始按钮 → 进入游戏
    connect(ui->btnStart, &QPushButton::clicked, this, &StartScreenWidget::startGameClicked);
}

StartScreenWidget::~StartScreenWidget()
{
    delete ui;
}


