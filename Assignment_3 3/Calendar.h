#ifndef CALENDAR_H
#define CALENDAR_H

#include "Event.h"
#include "List.h"
#include  "Array.h"

class Calendar
{
    public:
        Calendar(string="Basic Calendar");
        void add(Event*);
        void setName(string);
        void copyEvents(Array&);
        void print();

    private:
        string name;
        int size;
        List<Event> events;
};

#endif
