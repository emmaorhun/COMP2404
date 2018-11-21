/*
Emma Orhun
101071651
20/11/18
COMP2404
Assignment 3
*/


#ifndef DATE_H
#define DATE_H

#include <string>
using namespace std;

#include "Time.h"

//The date class is used to manage the specificities behind a calendar date and store all time data

class Date
{
  public:
    Date(int=0, int=0, int=2000, int=0, int=0);
    ~Date();
    void set(int, int, int, int, int);
    void printShort();
    void printLong();
    bool lessThan(Date&);
    void formatLong(string &);

  private:
    int day;
    int month;
    int year;
    int  lastDayInMonth();
    bool leapYear();
    string getMonthStr();
    Time time;
};

#endif
