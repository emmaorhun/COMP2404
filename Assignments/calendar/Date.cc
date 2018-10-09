#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

#include "Date.h"
#include "Time.h"

Date::Date(int d, int m, int y, int h, int min)
{
  set(d, m, y, h, min);
}

Date::~Date()
{
}

void Date::set(int d,int m,int y,int h,int min)
{
  year  = ( ( y > 0) ? y : 0 );
  month = ( ( m > 0 && m <= 12 ) ? m : 0 );
  day   = ( ( d > 0 && d <= lastDayInMonth() ) ? d : 0 );
  time = Time(h, min, 0);
}

void Date::printShort()
{
  cout<<setfill('0')<<setw(2)<<day<<"/"
      <<setfill('0')<<setw(2)<<month<<"/"
      <<setfill('0')<<setw(4)<<year<<"/"
      <<setfill('0')<<setw(8);
      time.print();
}

void Date::printLong()
{
  cout<<getMonthStr()<<" "<<day<<", "<<year<<", ";
  time.print();
}

int Date::lastDayInMonth()
{
  switch(month)
  {
    case 2:
      if (leapYear())
        return 29;
      else
        return 28;
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
      return 31;
    default:
      return 30;
  }
}

bool Date::lessThan(Date& d){
    if(year < d.year){
      return true;
    } else if(year == d.year){
      if(month < d.month){
        return true;
      } else if(month == d.month){
        if(day < d.day){
          return true;
        } else if(day == d.day){
          return (time.lessThan(d.time));
        }
      }
    }
  return false;
}

bool Date::leapYear()
{
  if ( year%400 == 0 ||
       (year%4 == 0 && year%100 != 0) )
    return true;
  else
    return false;
}

string Date::getMonthStr()
{
  string monthStrings[] = {
    "January", "February", "March", "April", "May", "June",
    "July", "August", "September", "October", "November", "December" };

  if ( month >= 1 && month <= 12 )
    return monthStrings[month-1];
  else
    return "Unknown";
}
