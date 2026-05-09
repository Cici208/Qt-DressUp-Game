#include "mainwindow.h"
#include "startscreenwidget.h"
#include "ui_mainwindow.h"
#include "stickerlabel.h"
#include <QPushButton>
#include <QScrollBar>
#include <QRandomGenerator>
#include <QMouseEvent>
#include <QFileDialog>

MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent)
    , ui(new Ui::MainWindow)
    , isDragging(false)
    , dragLabel(nullptr)
{
    ui->setupUi(this);
    this->installEventFilter(this);

    this->setFixedSize(900, 600);
    this->statusBar()->hide();

    this->setStyleSheet(R"(
MainWindow {
    background-image: url(:/images/bg_room.png);
    background-repeat: no-repeat;
    background-position: top left;
    background-size: cover;
}
)");

    m_bgmPlayer = new QMediaPlayer(this);
    m_audioOutput = new QAudioOutput(this);
    m_bgmPlayer->setAudioOutput(m_audioOutput);
    m_bgmPlayer->setSource(QUrl("qrc:/audio/bgm.mp3"));
    m_audioOutput->setVolume(0.5);
    m_bgmPlayer->setLoops(QMediaPlayer::Infinite);
    connect(ui->startScreenWidget, &StartScreenWidget::musicToggleRequested, this, &MainWindow::toggleMusic);

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
    ui->scrollArea->verticalScrollBar()->setStyleSheet(
        "QScrollBar:vertical{ background:transparent; width:6px; border-radius:3px; }"
        "QScrollBar::handle:vertical{ background:rgba(230,150,165,0.7); border-radius:3px; min-height:30px; }"
        "QScrollBar::add-line,QScrollBar::sub-line{border:none; background:none;}"
        );
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

    connect(ui->startScreenWidget, &StartScreenWidget::startGameClicked, this, &MainWindow::showGameScreen);
    ui->stackedWidget->setCurrentIndex(0);

    connect(ui->btnReturn, &QPushButton::clicked, this, &MainWindow::goBackToStartScreen);
    connect(ui->btnClean, &QPushButton::clicked, this, &MainWindow::clearAllOutfits);
    connect(ui->btnRandom, &QPushButton::clicked, this, &MainWindow::randomOutfit);
    ui->btnReturn->raise();
    ui->btnClean->raise();
    ui->btnRandom->raise();

    connect(ui->btnGoPhoto, &QPushButton::clicked, this, [=](){
        currentPhotoBg = QPixmap(":/images/photo/bg1.png");
        QPixmap scaledBg = currentPhotoBg.scaled(ui->lblPhotoCanvas->size(), Qt::KeepAspectRatioByExpanding, Qt::SmoothTransformation);
        ui->lblPhotoCanvas->setPixmap(scaledBg);
        ui->lblCharacter->setPixmap(ui->personLabel->pixmap());
        ui->stackedWidget->setCurrentIndex(2);
    });
    connect(ui->btnBackToGame, &QPushButton::clicked, this, [=](){
        ui->stackedWidget->setCurrentIndex(1);
    });
    connect(ui->btnBg1, &QPushButton::clicked, this, &MainWindow::on_btnBg1_clicked);
    connect(ui->btnBg2, &QPushButton::clicked, this, &MainWindow::on_btnBg2_clicked);
    connect(ui->btnBg3, &QPushButton::clicked, this, &MainWindow::on_btnBg3_clicked);

    // ====================== 核心修复！贴纸初始化 ======================
    QList<QLabel*> allStickers = ui->scrollLeftStickers->findChildren<QLabel*>() + ui->scrollRightStickers->findChildren<QLabel*>();
    for (QLabel* sticker : allStickers) {
        QPixmap pix = sticker->pixmap();
        if (!pix.isNull()) {
            QPixmap scaledPix = pix.scaled(100, 100, Qt::KeepAspectRatio, Qt::SmoothTransformation);
            sticker->setPixmap(scaledPix);
            sticker->setScaledContents(false);
            sticker->setAlignment(Qt::AlignCenter);

            // 修复1：设置QLabel可接收鼠标事件（关键！默认不接收）
            sticker->setAttribute(Qt::WA_TransparentForMouseEvents, false);
            sticker->setMouseTracking(true);

            // 修复2：给每个贴纸安装事件过滤器（必须！否则双击事件收不到）
            sticker->installEventFilter(this);
        }
    }
    // 代码强制把人物放进拍照画布里，不用手动拖UI
    ui->lblCharacter->setParent(ui->lblPhotoCanvas);
    // 给小人安装事件过滤器
    ui->lblCharacter->installEventFilter(this);
    connect(ui->btnTakePhoto, &QPushButton::clicked, this, &MainWindow::takePhoto);
}

void MainWindow::on_btnBg1_clicked() {
    currentPhotoBg = QPixmap(":/images/photo/bg1.png");
    QPixmap scaledBg = currentPhotoBg.scaled(ui->lblPhotoCanvas->size(), Qt::KeepAspectRatioByExpanding, Qt::SmoothTransformation);
    ui->lblPhotoCanvas->setPixmap(scaledBg);
}
void MainWindow::on_btnBg2_clicked() {
    currentPhotoBg = QPixmap(":/images/photo/bg2.png");
    QPixmap scaledBg = currentPhotoBg.scaled(ui->lblPhotoCanvas->size(), Qt::KeepAspectRatioByExpanding, Qt::SmoothTransformation);
    ui->lblPhotoCanvas->setPixmap(scaledBg);
}
void MainWindow::on_btnBg3_clicked() {
    currentPhotoBg = QPixmap(":/images/photo/bg3.png");
    QPixmap scaledBg = currentPhotoBg.scaled(ui->lblPhotoCanvas->size(), Qt::KeepAspectRatioByExpanding, Qt::SmoothTransformation);
    ui->lblPhotoCanvas->setPixmap(scaledBg);
}

void MainWindow::addStickerToBar(QWidget *container, const QString &imagePath) {
    StickerLabel *sticker = new StickerLabel(container);
    QPixmap pix(imagePath);
    QPixmap scaledPix = pix.scaled(50, 50, Qt::KeepAspectRatio, Qt::SmoothTransformation);
    sticker->setPixmap(scaledPix);
    sticker->setFixedSize(scaledPix.size());
    container->layout()->addWidget(sticker);
}

MainWindow::~MainWindow() { delete ui; }

void MainWindow::showGameScreen() { ui->stackedWidget->setCurrentIndex(1); }

void MainWindow::selectHair(){ auto btn = qobject_cast<QPushButton*>(sender()); if(btn) hair = QPixmap(":/images/" + btn->objectName() + ".png"); updateCharacter(); }
void MainWindow::selectDress(){ auto btn = qobject_cast<QPushButton*>(sender()); if(btn) dress = QPixmap(":/images/" + btn->objectName() + ".png"); updateCharacter(); }
void MainWindow::selectShoe(){ auto btn = qobject_cast<QPushButton*>(sender()); if(btn) shoe = QPixmap(":/images/" + btn->objectName() + ".png"); updateCharacter(); }
void MainWindow::selectPerson1(){ base = QPixmap(":/images/person1.png"); hair = dress = shoe = QPixmap(); updateCharacter(); }
void MainWindow::selectPerson2(){ base = QPixmap(":/images/person2.png"); hair = dress = shoe = QPixmap(); updateCharacter(); }
void MainWindow::selectPerson3(){ base = QPixmap(":/images/person3.png"); hair = dress = shoe = QPixmap(); updateCharacter(); }

void MainWindow::updateCharacter() {
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

void MainWindow::toggleMusic() {
    if (m_bgmPlayer->playbackState() == QMediaPlayer::PlayingState) m_bgmPlayer->pause();
    else m_bgmPlayer->play();
}

void MainWindow::goBackToStartScreen() { ui->stackedWidget->setCurrentIndex(0); }
void MainWindow::clearAllOutfits() { hair = QPixmap(); dress = QPixmap(); shoe = QPixmap(); updateCharacter(); }
void MainWindow::randomOutfit() {
    int randomHair = QRandomGenerator::global()->bounded(1, 10);
    int randomDress = QRandomGenerator::global()->bounded(1, 11);
    int randomShoe = QRandomGenerator::global()->bounded(1, 5);
    hair = QPixmap(QString(":/images/hair%1.png").arg(randomHair));
    dress = QPixmap(QString(":/images/dress%1.png").arg(randomDress));
    shoe = QPixmap(QString(":/images/shoe%1.png").arg(randomShoe));
    updateCharacter();
}

// 最终版：双击添加贴纸 + 画布自由拖动（100%生效）
bool MainWindow::eventFilter(QObject *obj, QEvent *event) {
    QLabel* label = qobject_cast<QLabel*>(obj);
    if (!label) return QMainWindow::eventFilter(obj, event);

    // -------------------- 1. 双击贴纸栏 → 添加到画布（修复版）--------------------
    if (event->type() == QEvent::MouseButtonDblClick) {
        QMouseEvent* me = static_cast<QMouseEvent*>(event);
        if (me->button() == Qt::LeftButton) {
            // 检查是否是贴纸栏的贴纸（scrollLeftStickers/scrollRightStickers的子控件）
            QWidget* parent = label->parentWidget();
            while (parent) {
                if (parent == ui->scrollLeftStickers || parent == ui->scrollRightStickers) {
                    // 确认是贴纸栏的贴纸，执行添加逻辑
                    QPixmap pix = label->pixmap();
                    if (!pix.isNull()) {
                        QLabel* newSticker = new QLabel(ui->lblPhotoCanvas);
                        newSticker->setPixmap(pix);
                        newSticker->setStyleSheet("background:transparent;");
                        newSticker->setAlignment(Qt::AlignCenter);
                        // 画布中心位置（完美居中）
                        newSticker->move(
                            ui->lblPhotoCanvas->width()/2 - pix.width()/2,
                            ui->lblPhotoCanvas->height()/2 - pix.height()/2
                            );
                        newSticker->show();
                        newSticker->installEventFilter(this);
                        // 贴纸置顶
                        newSticker->raise();
                        // 人物压到最底下
                        ui->lblCharacter->lower();
                    }
                    return true; // 拦截事件，不再传递
                }
                parent = parent->parentWidget();
            }
        }
    }

    // -------------------- 2. 仅允许画布/小人拖动（保持不变）--------------------
    if (label->parentWidget() != ui->lblPhotoCanvas && label != ui->lblCharacter) {
        return QMainWindow::eventFilter(obj, event);
    }

    QMouseEvent* me = static_cast<QMouseEvent*>(event);
    static QPoint offset;

    if (event->type() == QEvent::MouseButtonPress && me->button() == Qt::LeftButton) {
        offset = me->pos();
        label->raise();
        return true;
    }
    if (event->type() == QEvent::MouseMove && me->buttons() & Qt::LeftButton) {
        label->move(label->pos() + me->pos() - offset);
        return true;
    }
    return QMainWindow::eventFilter(obj, event);
}
// 拍照保存函数（必须和头文件声明完全一致）
void MainWindow::takePhoto()
{
    // 截取拍照画布
    QPixmap photo = ui->lblPhotoCanvas->grab();

    // 弹出保存窗口
    QString savePath = QFileDialog::getSaveFileName(
        this,
        "Save Photo",
        "MyPhoto.png",
        "PNG Image (*.png)"
        );

    // 保存图片
    if (!savePath.isEmpty()) {
        photo.save(savePath);
    }
}
