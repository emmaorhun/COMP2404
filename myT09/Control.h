#ifndef CONTROL_H
#define CONTROL_H

#include "Library.h"
#include "View.h"
#include "BookServer.h"

class Control{
    private:
        Library ficLib, nonFicLib;
        View view;
        BookServer server;
    public:
        Control();
        ~Control();
        void launch();

};

#endif
