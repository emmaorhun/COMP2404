#ifndef VIEW_H
#define VIEW_H

#include "Library.h"
#include <string>
using namespace std;

class View {
    public:
      bool displayMenu();
      void readBookEntry(string&, string&, int&, int&);
      void printLib(Library*);
};

#endif
