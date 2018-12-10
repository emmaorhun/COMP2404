/*
Emma Orhun
101071651
09/09/18
COMP2404
Assignment 1
*/

#define MAX_ARR_SIZE  128

#ifndef CALENDAR_H
#define CALENDAR_H

#include "Calendar.h"
#include "Event.h"

//The calendar class tores an array of users events pointers in chronological order and outputs them

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
