#ifndef LIBRARY_H
#define LIBRARY_H

#include <string>
using namespace std;

#include "List.h"
#include "Array.h"

class Library
{
  public:
    Library();
    void addBook(Book*);
    void copyBooks(Array&);
    void format(string&);
  private: 
    List bookArray;
};

#endif

