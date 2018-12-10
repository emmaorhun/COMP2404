/*
Emma Orhun
101071651
04/12/18
COMP2404
Assignment 4
*/

#ifndef SCHOOLEVENT_H
#define SCHOOLEVENT_H

#include "Event.h"

//The SchoolEvent class inherits from Event and manages comparing similar events based on date

class SchoolEvent : public Event
{
public:
  SchoolEvent(string="", int=0);
  ~SchoolEvent();
  bool operator<(Event *);
};

#endif
