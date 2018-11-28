#ifndef LIBRARY_H
#define LIBRARY_H
using namespace std;

#include "Book.h"
// #include "Array.h"
#include "List.h"

class Library
{

  public:
    void addBook(Book *);
    void print();
    void copyBooks(Array&);

  private:
    List<Book*> myList;
};

#endif

