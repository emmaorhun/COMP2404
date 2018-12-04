#ifndef VIEW_H
#define VIEW_H

#include <string>
using namespace std;

#include "Calendar.h"

class View
{
    public:
        bool showMainMenu();
        void readEvent(string&, int&, int&, int&, int&, int&, int&);
        void promptEventType(string&);
        void printCalendar(Calendar&);
    private:
};

#endif
