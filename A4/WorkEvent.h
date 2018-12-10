/*
Emma Orhun
101071651
04/12/18
COMP2404
Assignment 4
*/

#ifndef WORKEVENT_H
#define WORKEVENT_H

#include "Event.h"

//The Work class inherits from Event and manages comparing similar events based on priority

class WorkEvent : public Event
{
public:
  WorkEvent(string="", int=0);
  ~WorkEvent();
  bool operator<(Event *);
};

#endif
