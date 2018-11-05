/*
Emma Orhun
101071651
09/09/18
COMP2404
Assignment 1
*/

#ifndef EVENT_H
#define EVENT_H

#include "Date.h"
#include "Time.h"

//The event class is used to manage events in the calendar along with their name and date

class Event {
  public:
    Event(string="", int=0,int=0,int=0,int=0,int=0);
    ~Event();
    void print();
    Date getDate();
    void setDate(int=0,int=0,int=0,int=0,int=0);

  private:
    Date date;
    string name;
};

#endif
