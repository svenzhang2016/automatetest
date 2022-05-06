#ifndef EVENTWRAPPER_H
#define EVENTWRAPPER_H
#include <QPointF>
#include <memory>
#include <QEvent>

class EventWrapper
{
public:
    enum EventType{
      MousePressEvent,
      MouseReleaseEvent,
      KeyPressEvent,
      // custom event
    };

    EventWrapper();
    EventType type() const {return type_;}
    QPointF globalPos() const {return globalPos_;}
    std::unique_ptr<QEvent*> createEvent() const;

private:
    EventType type_;
    QPointF globalPos_;
};

#endif // EVENTWRAPPER_H
