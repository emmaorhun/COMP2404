#ifndef VIEW_H
#define VIEW_H

using namespace std;

#include "Book.h"
#include "Library.h"

class View{
    public:
        void mainMenu(int&);
        void readBook(int&, string&, string&, string&, int&);
        void print(string&);
        void readBookType(string&);
};

#endif
