/*
Emma Orhun
101071651
20/11/18
COMP2404
Assignment 3
*/


#ifndef EVENT_H
#define EVENT_H

#include "Date.h"
#include <string>
using namespace std;

//The event class is used to manage events in the calendar along with their name and date

class Event {
  protected:
    Event(string="", int=0, int=0,int=0,int=0,int=0,int=0);
  public:
    virtual ~Event() = 0;
    void print();
    Date getDate();
    void setDate(int,int,int,int,int);
    void format(string &);
    int getPriority();
    virtual bool lessThan(Event *) = 0;

  protected:
    int priority;
    string name;
    Date date;
};

#endif
