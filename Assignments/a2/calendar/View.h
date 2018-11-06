#ifndef VIEW_H
#define VIEW_H

#include "Calendar.h"
#include <string>
#include <iostream>

class View
{
    public:
        int menu();
        void acquireEventInfo(string &name, int &minute, int &hour, int &day, int &month, int &year);
        void printCalendar(Calendar &calendar);

    private:
};

#endif
