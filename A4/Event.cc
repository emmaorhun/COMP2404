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
#include <sstream>
using namespace std;

#include "Event.h"
#include "Date.h"

//Constructor
Event::Event(string n, int p, int h, int min, int d, int m, int y)
{
  name = n;
  priority = p;
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

int Event::getPriority()
{
  return priority;
}


void Event::format(string &outStr)
{
  stringstream output;
  output << endl << "---" << name << "---" << endl << "Priority: " << priority << endl;
  outStr += output.str();
  date.formatLong(outStr);
}

