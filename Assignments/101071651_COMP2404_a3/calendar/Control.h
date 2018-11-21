/*
Emma Orhun
101071651
20/11/18
COMP2404
Assignment 3
*/


#ifndef CONTROL_H
#define CONTROL_H

#include "SchoolEvent.h"
#include "WorkEvent.h"
#include "Event.h"
#include "View.h"
#include "Calendar.h"

//Takes care of the logic behind the view and the UI

class Control
{
public:
  void launch();

private:
  View view;
  Calendar workCalendar;
  Calendar schoolCalendar;
};

#endif
