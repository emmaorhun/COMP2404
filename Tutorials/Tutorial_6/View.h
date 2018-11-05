#ifndef VIEW_H
#define VIEW_H

using namespace std;

#include "Library.h"
#include "Book.h"

class View
{
    public:
        bool showMainMenu();
        void readBook(string&, string&, int&, int&);
        void printLibrary(Library&);
    private:
};

#endif
