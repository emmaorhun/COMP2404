/*
Emma Orhun
101071651
20/11/18
COMP2404
Assignment 3
*/

#include "WorkEvent.h"

//Constructor
WorkEvent::WorkEvent(string n, int p, int h, int min, int d, int m, int y) : Event(n, p, h, min, d, m , y)
{
}

//Deconstructor
WorkEvent::~WorkEvent() {}

//Used to compare and sort work events
bool WorkEvent::lessThan(Event *e)
{
  int temp = e->getPriority();
  return priority < temp;
}