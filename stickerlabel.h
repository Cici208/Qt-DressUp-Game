#ifndef STICKERLABEL_H
#define STICKERLABEL_H

#include <QLabel>
#include <QMouseEvent>

class StickerLabel : public QLabel
{
    Q_OBJECT
public:
    explicit StickerLabel(QWidget *parent = nullptr);

protected:
    // 重写鼠标事件，实现拖动
    void mousePressEvent(QMouseEvent *event) override;
    void mouseMoveEvent(QMouseEvent *event) override;
    void mouseReleaseEvent(QMouseEvent *event) override;

private:
    bool isDragging; // 是否正在拖动
    QPoint dragStartPos; // 拖动起点
};

#endif // STICKERLABEL_H
