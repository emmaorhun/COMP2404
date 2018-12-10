/*
Emma Orhun
101071651
04/12/18
COMP2404
Assignment 4
*/

#define MAX_ARR_SIZE  128

#ifndef CALENDAR_H
#define CALENDAR_H

#include "Array.h"
#include "Event.h"
#include "List.h"

//The calendar class stores an array of users events pointers in chronological order and outputs them

class Calendar
{
  public:
    Calendar(string="");
    ~Calendar();
    void set(string);
    void add(Event *);
    void print();
    void copyEvents(Array&);

  private:
    int num_events;
    List<Event> events;
    string name;
};

#endif
