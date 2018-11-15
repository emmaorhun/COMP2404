/*
Emma Orhun
101071651
09/09/18
COMP2404
Assignment 1
*/

#include <iostream>
#include <sstream>
#include <iomanip>
#include <string>
using namespace std;

#include "Time.h"

//Constructor
Time::Time(int h, int m, int s)
{
  set(h, m, s);
}

void Time::set(int h,int m,int s)
{
  //Sets the hours, minutes, seconds of a given time
  hours   = ( h >= 0 && h < 24) ? h : 0;
  minutes = ( m >= 0 && m < 60) ? m : 0;
  seconds = ( s >= 0 && s < 60) ? s : 0;
}

bool Time::lessThan(Time& t)
{
  //Checks whether a time is greater than the other
  return convertToSecs() < t.convertToSecs();
}

int Time::convertToSecs()
{
  //converts in hours+minutes+seconds to seconds
  return (hours*3600 + minutes*60 + seconds);
}

void Time::print()
{
  //prints given time
  cout<<setfill('0')<<setw(2)<<hours<<":"
      <<setfill('0')<<setw(2)<<minutes<<":"
      <<setfill('0')<<setw(2)<<seconds<<endl;
}

void Time::format(string &outStr)
{
  //prints given time
  //str += 
  stringstream temp;
  temp <<setfill('0')<<setw(2)<<hours<<":"
      <<setfill('0')<<setw(2)<<minutes<<":"
      <<setfill('0')<<setw(2)<<seconds<<endl;
  outStr += temp.str();
}