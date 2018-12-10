/*
Emma Orhun
101071651
04/12/18
COMP2404
Assignment 4
*/


#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

#include "Event.h"
#include "Date.h"
#include "Calendar.h"

//Constructor
Calendar::Calendar(string n)
{
  set(n);
}

//Deconstructor
Calendar::~Calendar()
{
}

void Calendar::set(string n)
{
  name = n;
  num_events = 0;
}

//Adds a new event to calendar
void Calendar::add(Event* e)
{
    events.add(e);
}

void Calendar::copyEvents(Array& a)
{
  events.copy(a);
}

//Outputs calendar information in nice format
void Calendar::print()
{
  cout << endl;
  cout << "============ " + name + " ============" + "\n";
  events.print();
}
