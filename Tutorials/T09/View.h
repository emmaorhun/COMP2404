#ifndef VIEW_H
#define VIEW_H
using namespace std;

#include "Library.h"
#include "Book.h"

class View
{
  public:
    bool displayMenu();
    void readEntry(string&, string&, int&, int&, string&);
    int readBookType();
    void printLibrary(Library &);

  private:
};
#endif