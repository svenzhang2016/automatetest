#include "eventwrapper.h"

#include <QKeyEvent>
#include <QMouseEvent>

EventWrapper::EventWrapper() {}

std::unique_ptr<QEvent *> EventWrapper::createEvent() const {
  if (type() == MousePressEvent) {
  } else if (type() == MouseReleaseEvent) {
  } else if (type() == KeyPressEvent) {
  }
  return nullptr;
}
