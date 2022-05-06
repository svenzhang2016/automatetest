#include "eventplayer.h"

#include <QApplication>
#include <QWidget>

EventPlayer::EventPlayer(QObject* parent) : QObject{parent} {}

void EventPlayer::record() {}

void EventPlayer::play() {
  foreach (const EventWrapper& ew, eventList_) {
    // [1] 获取点位对应的控件
    QWidget* w = getWidgetAtGlobalPos(ew.globalPos());

    if (w != nullptr) {
      // [2] 等待事件间隔事件
      std::unique_ptr<QEvent*> ev = ew.createEvent();

      // [3] 模拟相应的事件，并将该事件发送到控件上
      QApplication::postEvent(w, *ev);
    }
  }
}

QWidget* EventPlayer::getWidgetAtGlobalPos(const QPointF& globalPos) {
  return nullptr;
}
