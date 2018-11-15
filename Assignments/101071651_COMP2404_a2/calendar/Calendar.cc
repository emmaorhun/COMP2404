/*
Modifications: Emma Orhun
101071651
06/11/18
COMP2404
Assignment 2
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

//Prints calendar
void Calendar::print()
{
  cout<<endl;
  cout<<"============ "<<name<<" ============"<<endl;
  events.print();
  cout<<endl;
}

void Calendar::format(string &outStr)
{
  outStr += "\n";
  outStr += "============ " + name + " ============" + "\n";
  events.format(outStr);
  outStr += "\n";
}
