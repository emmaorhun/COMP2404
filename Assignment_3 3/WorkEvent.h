#ifndef WORKEVENT_H
#define WORKEVENT_H

#include "Event.h"

class WorkEvent : public Event{
    public:
        WorkEvent(string="Default Event", int=0);
        ~WorkEvent();
        bool operator<(Event*);
    private:
};

#endif
