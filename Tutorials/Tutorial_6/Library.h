#ifndef ARRAY_H
#define ARRAY_H

using namespace std;

#include "Book.h"
#include "Array.h"

//#define MAX_ARR_SIZE 128

class Library{

    public:
        void addBook(Book*);
        void print();

    private:
        Array inventory;
};

#endif
