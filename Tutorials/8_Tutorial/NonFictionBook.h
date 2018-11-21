#ifndef NONFICTIONBOOK_H
#define NONFICTIONBOOK_H

#include "Book.h"

class NonFictionBook : public Book{

    public:
        NonFictionBook(int=0, string="Unknown", string="Unknown", int=0, int=0);
        ~NonFictionBook();
        bool lessThan(Book*);
    private:

};

#endif