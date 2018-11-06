/*
Emma Orhun
101071651
09/09/18
COMP2404
Assignment 2
*/

#ifndef CONTROL_H
#define CONTROL_H

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
  Calendar calendar;
};

#endif
