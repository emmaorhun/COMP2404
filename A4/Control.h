/*
Emma Orhun
101071651
04/12/18
COMP2404
Assignment 4
*/


#ifndef CONTROL_H
#define CONTROL_H

#include "SchoolEvent.h"
#include "WorkEvent.h"
#include "Event.h"
#include "View.h"
#include "EventServer.h"
#include "Calendar.h"

//Takes care of the logic behind the view and the UI

class Control
{
public:
  Control();
  ~Control();
  void launch();

private:
  int minute, hour, day, month, year, priority;
  string name, type;
  EventServer server;
  View view;
  Calendar workCalendar;
  Calendar schoolCalendar;
};

#endif
