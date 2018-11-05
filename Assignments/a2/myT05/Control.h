#ifndef CONTROL_H
#define CONTROL_H

#include "View.h"
#include <string>
using namespace std;

class Control {
    public:
      void launch();

    private:
      Library* lib;
      View myView;
};

#endif
