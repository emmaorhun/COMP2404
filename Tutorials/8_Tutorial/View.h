#ifndef VIEW_H
#define VIEW_H

#include <string>
using namespace std;

#include "Library.h"
//#include "Book.h"

class View
{
    public:
        bool showMainMenu();
        void readBook(int&, string&, string&, int&, int&);
        void readBookType(string&);
        void printLibrary(Library&);
    private:
};

#endif
