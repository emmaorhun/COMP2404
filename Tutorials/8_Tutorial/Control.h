#ifndef CONTROL_H
#define CONTROL_H

using namespace std;

#include "Library.h"
#include "View.h"
#include "Book.h"
#include "FictionBook.h"
#include "NonFictionBook.h"

class Control
{

    public:
        void launch();

    private:
        Library scsLibrary;
        Library loungeLibrary;
        View view;
        string type;
        string title, author;
        int id, year;
        int callNumber;
};

#endif
