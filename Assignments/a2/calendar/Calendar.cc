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
  set(name);
}

//Deconstructor
Calendar::~Calendar()
{
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
