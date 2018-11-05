#ifndef LIBRARY_H
#define LIBRARY_H

#include "Book.h"
#include "Array.h"
#include <string>
using namespace std;

class Library {
    public:
        Library();
        void addBook(Book*);
        void print();

    private:
        //Book myBooks[MAX_ARR_SIZE];
        //int numBooksInArr;
        Array arr;
};

#endif
