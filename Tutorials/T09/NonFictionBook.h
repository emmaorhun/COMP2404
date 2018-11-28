#ifndef NONFICTIONBOOK_H
#define NONFICTIONBOOK_H

#include "Book.h"

class NonFictionBook: public Book
{
    public:
        NonFictionBook(int = 0,  string = "Unknown", string = "Unknown", string = "Unknown", int = 0);
        virtual bool lessThan(Book *); // declare virtual function
};

#endif 
