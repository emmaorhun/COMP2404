#ifndef NONFICTIONBOOK_H
#define NONFICTIONBOOK_H

#include "Book.h"
#include <vector>

class NonFictionBook : public Book{
    public:
        NonFictionBook(int=0, string="0", string="Unknown", string="Unknown", int=0);
        virtual bool lessThan(Book*);
};

#endif
