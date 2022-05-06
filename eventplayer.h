#ifndef EVENTPLAYER_H
#define EVENTPLAYER_H

#include <QObject>
#include <memory>

#include "eventwrapper.h"

class EventPlayer : public QObject {
  Q_OBJECT
 public:
  explicit EventPlayer(QObject *parent = nullptr);

  void record();
  void play();

 private:
  QWidget *getWidgetAtGlobalPos(const QPointF &globalPos);

 private:
  QList<EventWrapper> eventList_;
};

#endif  // EVENTPLAYER_H
