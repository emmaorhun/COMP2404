#include <iostream>
#include <iomanip>
using namespace std;

#include "Library.h"

void Library::addBook(Book *book)
{
    myList.add(*book);
}

void Library::print()
{
    cout << "Library:" << endl;
    myList.print();
}

void Library::copyBooks(Array& arr)
{
    myList.copy(arr);
}

