#ifndef LIBRARY_H
#define LIBRARY_H

using namespace std;

#include "Book.h"
#include "List.h"

//#define MAX_ARR_SIZE 128

class Library{

    public:
        void addBook(Book*);
        void print();

    private:
        List inventory;
};

#endif
