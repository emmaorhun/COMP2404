#ifndef EVENT_H
#define EVENT_H

#include "Date.h"
#include "Time.h"

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
