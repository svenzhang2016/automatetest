#ifndef EVENTSERIALIZATION_H
#define EVENTSERIALIZATION_H

#include <QString>

class EventSerialization {
 public:
  EventSerialization();

  void load(const QString& fileName);

  void save(const QString& fileName);
};

#endif  // EVENTSERIALIZATION_H
