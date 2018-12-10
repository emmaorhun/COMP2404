/*
Emma Orhun
101071651
04/12/18
COMP2404
Assignment 4
*/

#include "SchoolEvent.h"
#include "Date.h"

//Constructor
SchoolEvent::SchoolEvent(string name, int priority) : Event(name, priority, 0, 0, 0, 0, 0)
{
}

//Deconstructor
SchoolEvent::~SchoolEvent() {}


//Used to compare and sort school events
bool SchoolEvent::operator<(Event *e)
{
  Date temp = e->getDate();
  return date<temp;
}