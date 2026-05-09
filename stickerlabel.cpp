#include "stickerlabel.h"

StickerLabel::StickerLabel(QWidget *parent)
    : QLabel(parent), isDragging(false)
{
    // 设置贴纸透明背景，无边框
    setStyleSheet("background: transparent; border: none;");
    // 允许鼠标跟踪
    setMouseTracking(true);
}

// 鼠标按下：记录起点，开始拖动
void StickerLabel::mousePressEvent(QMouseEvent *event)
{
    if (event->button() == Qt::LeftButton) {
        isDragging = true;
        dragStartPos = event->pos();
        // 让贴纸显示在最上层，拖动时不被挡住
        raise();
    }
    QLabel::mousePressEvent(event);
}

// 鼠标移动：拖动贴纸
void StickerLabel::mouseMoveEvent(QMouseEvent *event)
{
    if (isDragging) {
        // 计算贴纸的新位置
        QPoint newPos = this->pos() + (event->pos() - dragStartPos);
        this->move(newPos);
    }
    QLabel::mouseMoveEvent(event);
}

// 鼠标松开：结束拖动
void StickerLabel::mouseReleaseEvent(QMouseEvent *event)
{
    if (event->button() == Qt::LeftButton) {
        isDragging = false;
    }
    QLabel::mouseReleaseEvent(event);
}
