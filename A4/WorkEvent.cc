/*
Emma Orhun
101071651
20/11/18
COMP2404
Assignment 3
*/

#include "WorkEvent.h"

//Constructor
WorkEvent::WorkEvent(string name, int priority) : Event(name, priority, 0, 0, 0, 0 , 0)
{
}

//Deconstructor
WorkEvent::~WorkEvent() {}

//Used to compare and sort work events
bool WorkEvent::operator<(Event *e)
{
  int temp = e->getPriority();
  return priority < temp;
}