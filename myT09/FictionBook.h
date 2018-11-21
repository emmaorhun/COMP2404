#ifndef FICTIONBOOK_H
#define FICTIONBOOK_H

#include "Book.h"
#include <vector>

class FictionBook : public Book{
    public:
        FictionBook(int=0, string="0", string="Unknown", string="Unknown", int=0);
        virtual bool lessThan(Book*);
};

#endif
