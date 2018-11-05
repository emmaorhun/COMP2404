#ifndef ARRAY_H
#define ARRAY_H

#define MAX_ARR_SIZE 128

#include "Book.h"
#include <string>
using namespace std;

class Array {
    public:
        Array();
        ~Array();
        void add(Book*);
        void print();

    private:
        Book* elements[MAX_ARR_SIZE];
        int size; //curent num of books in the array


};

#endif

