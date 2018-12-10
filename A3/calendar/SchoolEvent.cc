/*
Emma Orhun
101071651
20/11/18
COMP2404
Assignment 3
*/

#include "SchoolEvent.h"
#include "Date.h"

//Constructor
SchoolEvent::SchoolEvent(string n, int p, int hours,  int min,int d, int m, int y) : Event(n, p, hours, min, d, m, y)
{
}

//Deconstructor
SchoolEvent::~SchoolEvent() {}


//Used to compare and sort school events
bool SchoolEvent::lessThan(Event *e)
{
  Date temp = e->getDate();
  return date.lessThan(temp);
}