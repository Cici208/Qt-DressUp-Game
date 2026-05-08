#include "mainwindow.h"
#include "startscreenwidget.h"
#include "ui_mainwindow.h"
#include <QPushButton>
#include <QScrollBar>
#include <QRandomGenerator>  // 新增！随机搭配必须用

MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    // 固定窗口大小 900x600（匹配你的1536*1024原图3:2比例，最清晰）
    this->setFixedSize(900, 600);
    this->statusBar()->hide();

    // 背景：原图比例不拉伸 正确写法，样式表单独一段
    this->setStyleSheet(R"(
MainWindow {
    background-image: url(:/images/bg_room.png);
    background-repeat: no-repeat;
    background-position: top left;
    background-size: cover;
}
)");

    // ======================
    // 背景音乐初始化  放在样式表外面！独立代码！
    // ======================
    m_bgmPlayer = new QMediaPlayer(this);
    m_audioOutput = new QAudioOutput(this);
    m_bgmPlayer->setAudioOutput(m_audioOutput);

    m_bgmPlayer->setSource(QUrl("qrc:/audio/bgm.mp3"));
    m_audioOutput->setVolume(0.5);
    m_bgmPlayer->setLoops(QMediaPlayer::Infinite);

    // 关联开屏音乐按钮
    connect(ui->startScreenWidget, &StartScreenWidget::musicToggleRequested,
            this, &MainWindow::toggleMusic);



    ui->tabWidget->setStyleSheet(R"(
QTabWidget{
    background:transparent;
    border:none;
}

/* 衣柜面板 100% 透明，完美显示背景衣柜 */
QTabWidget::pane{
    background: transparent;
    border: none;
    margin-top: 8px;
}

QTabWidget::tab-bar {
    subcontrol-origin: margin;
    subcontrol-position: top;
    left: -3px;       /* 【关键】数字越大，标签整体越往右！直接调这个！ */
    top: 3px;         /* 上下位置微调，不用改也行 */
}

/* 标签整体位置：精准适配你的新背景 */
QTabBar{
    alignment: center;
    margin-top: 9px;   /* 标签整体往上移，贴合背景 */
    margin-left: 500px;

    spacing: 100px;
}

/* 标签大小/样式：和背景完美匹配 */
QTabBar::tab{
    background:rgba(255,225,230,0.1);
    color:#d87093;
    border-radius: 18px;
    min-width: 59px;   /* 宽度适配 */
    max-width: 59px;
    min-height: 27px;   /* 高度适配 */
    margin-right: 0px; /* 间距适配 */
    margin: 0 8px;
    padding: 5px 10px;
    font-size: 13px;
    border:none;
}

QTabBar::tab:last-child{
    margin-right: 0px;
}

QTabBar::tab:selected{
    background:rgba(255,179,190,0.4);
    color:white;
}

QTabBar::tab:hover{
    background:rgba(255,179,190,0.2);
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
        // ========== 新增：连接三个按钮的点击信号 ==========
        // 1. 返回按钮：点击切回开屏界面
        connect(ui->btnReturn, &QPushButton::clicked, this, &MainWindow::goBackToStartScreen);
        // 2. 清空搭配按钮：点击清空所有服装
        connect(ui->btnClean, &QPushButton::clicked, this, &MainWindow::clearAllOutfits);
        // 3. 随机搭配按钮：点击随机选服装
        connect(ui->btnRandom, &QPushButton::clicked, this, &MainWindow::randomOutfit);

        // 确保按钮显示在最上层（防止被背景挡住）
        ui->btnReturn->raise();
        ui->btnClean->raise();
        ui->btnRandom->raise();
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
// 播放/暂停 切换（你要的功能！）
void MainWindow::toggleMusic()
{
    if (m_bgmPlayer->playbackState() == QMediaPlayer::PlayingState)
    {
        // 如果正在播放 → 暂停
        m_bgmPlayer->pause();
    }
    else
    {
        // 如果暂停/停止 → 播放
        m_bgmPlayer->play();
    }
}
// ========== 1. 返回开屏界面功能 ==========
void MainWindow::goBackToStartScreen()
{
    // StackedWidget的第0页是开屏界面，直接切换过去
    ui->stackedWidget->setCurrentIndex(0);
}

// ========== 2. 清空搭配功能 ==========
void MainWindow::clearAllOutfits()
{
    // 清空你所有的服装变量（和你updateCharacter里的变量完全对应）
    hair = QPixmap();   // 发型
    dress = QPixmap();  // 连衣裙
    shoe = QPixmap();   // 鞋子
    // 后面你如果加了上衣、下装、袜子，也要在这里一起清空！
    // 比如：top = QPixmap(); bottom = QPixmap(); socks = QPixmap();

    // 调用updateCharacter，刷新角色显示
    updateCharacter();
}

// ========== 3. 随机搭配功能（和你现有的服装数量对应！） ==========
void MainWindow::randomOutfit()
{
    // --- 注意：这里的数字要和你实际的服装数量一致！---
    // 你的hair有9个（hair1到hair9），所以范围是1-9
    int randomHair = QRandomGenerator::global()->bounded(1, 10);
    // 你的dress有10个（dress1到dress10），所以范围是1-10
    int randomDress = QRandomGenerator::global()->bounded(1, 11);
    // 你的shoe有4个（shoe1到shoe4），所以范围是1-4
    int randomShoe = QRandomGenerator::global()->bounded(1, 5);

    // 给服装变量赋值（路径和你selectHair里的路径完全一致！）
    hair = QPixmap(QString(":/images/hair%1.png").arg(randomHair));
    dress = QPixmap(QString(":/images/dress%1.png").arg(randomDress));
    shoe = QPixmap(QString(":/images/shoe%1.png").arg(randomShoe));

    // 后面加了上衣/下装的话，也可以在这里加随机代码
    // 比如：int randomTop = QRandomGenerator::global()->bounded(1, 6);
    // top = QPixmap(QString(":/images/top%1.png").arg(randomTop));

    // 刷新角色显示
    updateCharacter();
}
