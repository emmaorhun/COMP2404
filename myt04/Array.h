#define MAX_ARR_SIZE  128
#include "Book.h"

#ifndef ARRAY_H
#define ARRAY_H

class Array
{
  public:
    Array();
    ~Array();
    void Add(Book*);
    void print();

  private:
    int size;
    Book* elements[MAX_ARR_SIZE];
};

#endif
