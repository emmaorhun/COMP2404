#ifndef CONTROL_H
#define CONTROL_H

using namespace std;

#include "Calendar.h"
#include "View.h"
#include "SchoolEvent.h"
#include "WorkEvent.h"
#include "Array.h"
#include "EventServer.h"

class Control
{

    public:
        Control();
        ~Control();
        void launch();

    private:
        Calendar schoolCalendar;
        Calendar workCalendar;
        EventServer evServer;
        View view;
        string type;
        string name;
        int priority;
        int day, month, year, hour, minute;
};

#endif
