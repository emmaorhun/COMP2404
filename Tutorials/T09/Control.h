#ifndef CONTROL_H
#define CONTROL_H

using namespace std;
#include "Array.h"
#include "Library.h"
#include "View.h"
#include "BookServer.h"

class Control
{

  public:
    Control(); //default constructor
    ~Control(); //default destructor
    void launch();

  private:
    Library scs;
    Library lounge;
    BookServer myServer;
    View view;
  };
  
#endif
