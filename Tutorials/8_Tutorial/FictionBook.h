#ifndef FICTIONBOOK_H
#define FICTIONBOOK_H

#include "Book.h"

class FictionBook : public Book{

    public:
        FictionBook(int=0, string="Unknown", string="Unknown", int=0, int=0);
        ~FictionBook();
        bool lessThan(Book*);
    private:
};

#endif