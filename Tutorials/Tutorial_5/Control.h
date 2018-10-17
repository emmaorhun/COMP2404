#ifndef CONTROL_H
#define CONTROL_H

using namespace std;

#include "Library.h"
#include "View.h"

class Control
{

    public:
        void launch();

    private:
        Library library;
        View view;
};

#endif
