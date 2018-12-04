#ifndef EVENT_H
#define EVENT_H

#include "Date.h"
//#include <string>

class Event
{
    public:
        Event(string="Default Event", int=0, int=0, int=2000, int=0, int=0, int=0);
        virtual ~Event();
        void setDate(int, int, int, int, int);
        void print();
        Date& getDate();
        virtual bool operator<(Event*)=0;
        int getPriority();

    protected:
        string name;
        Date date;
        int priority;

};

#endif
