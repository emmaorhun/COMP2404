#ifndef VIEW_H
#define VIEW_H
#include <string>
using namespace std;

#include "Library.h"

class View
{
public:
  void menu();
  void printLibrary(Library);

private:
  int getOption();
};

#endif
