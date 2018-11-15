/*
Modifications: Emma Orhun
101071651
06/11/18
COMP2404
Assignment 2
*/

#define MAX_ARR_SIZE  128

#ifndef CALENDAR_H
#define CALENDAR_H

#include "Event.h"
#include "List.h"

//The calendar class stores an array of users events pointers in chronological order and outputs them

class Calendar
{
  public:
    Calendar(string="");
    ~Calendar();
    void print();
    void set(string);
    void add(Event *);
    void format(string &);


  private:
    int num_events;
    string name;
    List events;
};

#endif
