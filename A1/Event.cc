/*
Emma Orhun
101071651
09/09/18
COMP2404
Assignment 1
*/

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

#include "Event.h"
#include "Date.h"

//Constructor
Event::Event(string n, int d, int m, int y, int h, int min)
{
  name = n;
  date = Date(d, m, y, h, min);
}

//Deconstructor
Event::~Event()
{
}

Date Event::getDate()
{
  //returns the date of given event
  return date;
}

void Event::setDate(int d, int m, int y, int h, int min)
{
  //sets the date of given event
  date = Date(d,m,y,h,min);
}

void Event::print()
{
  cout<<name<<": "; //prints name of event
  date.printLong(); //prints date of event
}
