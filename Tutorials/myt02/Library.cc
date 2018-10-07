#include <iostream>
#include <iomanip>
using namespace std;

#include "Library.h"
#include "Array.h"

Library::Library(){}

void Library::addBook(Book& b)
{
  books.Add(b);
}

void Library::print()
{
  cout << endl << endl << "LIBRARY: " << endl;
  books.print();
  cout << endl;
}
