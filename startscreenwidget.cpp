#include "startscreenwidget.h"
#include "ui_startscreenwidget.h"

StartScreenWidget::StartScreenWidget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::StartScreenWidget)
{
    ui->setupUi(this);

    this->setStyleSheet("QPushButton{background:transparent; border:none;}");

    connect(ui->btnStart, &QPushButton::clicked, this, &StartScreenWidget::startGameClicked);
    connect(ui->btnMusic, &QPushButton::clicked, this, &StartScreenWidget::musicToggleRequested);
}

StartScreenWidget::~StartScreenWidget()
{
    delete ui;
}
