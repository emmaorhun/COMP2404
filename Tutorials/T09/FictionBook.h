#ifndef FICTIONBOOK_H
#define FICTIONBOOK_H

#include "Book.h"

class FictionBook: public Book
{
    public:
        FictionBook(int = 0, string = "Unknown", string = "Unknown", string = "Unknown", int = 0);
        virtual bool lessThan(Book *); //declare virtual function
};

#endif 
