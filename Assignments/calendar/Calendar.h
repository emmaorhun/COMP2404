#define MAX_ARR_SIZE  128

#ifndef CALENDAR_H
#define CALENDAR_H

#include "Calendar.h"
#include "Event.h"

class Calendar
{
  public:
    Calendar(string="");
    ~Calendar();
    void add(Event*);
    void print();
  private:
    string name;
    int num_events;
    Event* events[MAX_ARR_SIZE];
};

#endif
