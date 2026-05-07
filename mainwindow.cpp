#include "mainwindow.h"
#include "startscreenwidget.h"
#include "ui_mainwindow.h"
#include <QPushButton>
#include <QScrollBar>

MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    // 固定窗口大小 900x600（匹配你的1536*1024原图3:2比例，最清晰）
    this->setFixedSize(900, 600);
    this->statusBar()->hide();

    // 背景：原图比例不拉伸
    this->setStyleSheet(R"(
    MainWindow {
        background-image: url(:/images/bg_room.png);
        background-repeat: no-repeat;
        background-position: top left;
        background-size:
    }
)");



    // 加深版衣柜磨砂（原始正常代码，恢复它！）
    ui->tabWidget->setStyleSheet(R"(
    QTabWidget{background:transparent; border:none;}
    QTabWidget::pane{
        background:rgba(255,240,243,0.45);
        border-radius:12px;
        border:none;
    }
    QTabBar::tab{
        background:transparent;
        color:#d87093;
        padding:7px 15px;
        border:none;
        border-radius:8px;
        font-size:14px;
    }
    QTabBar::tab:selected{
        background:rgba(255,179,190,0.75);
        color:white;
    }
    QTabBar::tab:hover{
        background:rgba(255,179,190,0.4);
    }
)");

    ui->scrollArea->setStyleSheet("background:transparent; border:none;");
    ui->scrollAreaWidgetContents->setStyleSheet("background:transparent;");

    // 加深版滚动条
    ui->scrollArea->verticalScrollBar()->setStyleSheet(
        "QScrollBar:vertical{"
        "   background:transparent;"
        "   width:6px;"
        "   border-radius:3px;"
        "}"
        "QScrollBar::handle:vertical{"
        "   background:rgba(230,150,165,0.7);"
        "   border-radius:3px;"
        "   min-height:30px;"
        "}"
        "QScrollBar::add-line,QScrollBar::sub-line{border:none; background:none;}"
        );

    // 只加这2行！单独修复衣服、鞋子的黑底，不影响发饰！
    ui->scrollArea_2->setStyleSheet("background:transparent; border:none;");
    ui->scrollArea_5->setStyleSheet("background:transparent; border:none;");


    ui->personLabel->setStyleSheet("background:transparent;");
    ui->personLabel->setAlignment(Qt::AlignCenter);

    base = QPixmap(":/images/person1.png");
    hair = QPixmap();
    dress = QPixmap();
    shoe = QPixmap();

    connect(ui->btnPerson1, &QPushButton::clicked, this, &MainWindow::selectPerson1);
    connect(ui->btnPerson2, &QPushButton::clicked, this, &MainWindow::selectPerson2);
    connect(ui->btnPerson3, &QPushButton::clicked, this, &MainWindow::selectPerson3);

    connect(ui->hair1, &QPushButton::clicked, this, &MainWindow::selectHair);
    connect(ui->hair2, &QPushButton::clicked, this, &MainWindow::selectHair);
    connect(ui->hair3, &QPushButton::clicked, this, &MainWindow::selectHair);
    connect(ui->hair4, &QPushButton::clicked, this, &MainWindow::selectHair);
    connect(ui->hair5, &QPushButton::clicked, this, &MainWindow::selectHair);
    connect(ui->hair6, &QPushButton::clicked, this, &MainWindow::selectHair);
    connect(ui->hair7, &QPushButton::clicked, this, &MainWindow::selectHair);
    connect(ui->hair8, &QPushButton::clicked, this, &MainWindow::selectHair);
    connect(ui->hair9, &QPushButton::clicked, this, &MainWindow::selectHair);

    connect(ui->dress1, &QPushButton::clicked, this, &MainWindow::selectDress);
    connect(ui->dress2, &QPushButton::clicked, this, &MainWindow::selectDress);
    connect(ui->dress3, &QPushButton::clicked, this, &MainWindow::selectDress);
    connect(ui->dress4, &QPushButton::clicked, this, &MainWindow::selectDress);
    connect(ui->dress5, &QPushButton::clicked, this, &MainWindow::selectDress);
    connect(ui->dress6, &QPushButton::clicked, this, &MainWindow::selectDress);
    connect(ui->dress7, &QPushButton::clicked, this, &MainWindow::selectDress);
    connect(ui->dress8, &QPushButton::clicked, this, &MainWindow::selectDress);
    connect(ui->dress9, &QPushButton::clicked, this, &MainWindow::selectDress);
    connect(ui->dress10,&QPushButton::clicked, this, &MainWindow::selectDress);

    connect(ui->shoe1, &QPushButton::clicked, this, &MainWindow::selectShoe);
    connect(ui->shoe2, &QPushButton::clicked, this, &MainWindow::selectShoe);
    connect(ui->shoe3, &QPushButton::clicked, this, &MainWindow::selectShoe);
    connect(ui->shoe4, &QPushButton::clicked, this, &MainWindow::selectShoe);

    updateCharacter();
    // =====新增：连接开屏界面的开始游戏按钮 =====
        connect(ui->startScreenWidget,
                &StartScreenWidget::startGameClicked, this,
                &MainWindow::showGameScreen);

    // 初始显示开屏界面（第0页）
    ui->stackedWidget->setCurrentIndex(0);
}

MainWindow::~MainWindow()
{
    delete ui;
}
void MainWindow::showGameScreen()
{
    // 切换到游戏界面（第1页）
    ui->stackedWidget->setCurrentIndex(1);
}

void MainWindow::selectHair(){ auto btn = qobject_cast<QPushButton*>(sender()); if(btn) hair = QPixmap(":/images/" + btn->objectName() + ".png"); updateCharacter(); }
void MainWindow::selectDress(){ auto btn = qobject_cast<QPushButton*>(sender()); if(btn) dress = QPixmap(":/images/" + btn->objectName() + ".png"); updateCharacter(); }
void MainWindow::selectShoe(){ auto btn = qobject_cast<QPushButton*>(sender()); if(btn) shoe = QPixmap(":/images/" + btn->objectName() + ".png"); updateCharacter(); }
void MainWindow::selectPerson1(){ base = QPixmap(":/images/person1.png"); hair = dress = shoe = QPixmap(); updateCharacter(); }
void MainWindow::selectPerson2(){ base = QPixmap(":/images/person2.png"); hair = dress = shoe = QPixmap(); updateCharacter(); }
void MainWindow::selectPerson3(){ base = QPixmap(":/images/person3.png"); hair = dress = shoe = QPixmap(); updateCharacter(); }

void MainWindow::updateCharacter()
{
    if(base.isNull()) base = QPixmap(":/images/person1.png");
    QPixmap result(base.size());
    result.fill(Qt::transparent);
    QPainter painter(&result);

    painter.drawPixmap(0, 0, base);
    if(!shoe.isNull()) painter.drawPixmap(0,0,shoe);
    if(!dress.isNull()) painter.drawPixmap(0,0,dress);
    if(!hair.isNull()) painter.drawPixmap(0,0,hair);

    painter.end();
    ui->personLabel->setPixmap(result.scaled(ui->personLabel->size(), Qt::KeepAspectRatio, Qt::SmoothTransformation));
}
