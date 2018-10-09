#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

#include "Event.h"
#include "Date.h"

Event::Event(string n, int d, int m, int y, int h, int min)
{
  name = n;
  date = Date(d, m, y, h, min);
}

Event::~Event()
{

}

Date Event::getDate()
{
  return date;
}

void Event::setDate(int d, int m, int y, int h, int min)
{
  date = Date(d,m,y,h,min);
}

void Event::print()
{
  cout<<name<<": ";
  date.printShort();
}
