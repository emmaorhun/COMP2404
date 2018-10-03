#include "Book.h"
#include "Array.h"

#ifndef LIBRARY_H
#define LIBRARY_H

class Library
{
  public:
    Library();
    void addBook(Book*);
    void print();

  private:
    Array books;
};

#endif
