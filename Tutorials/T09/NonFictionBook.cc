#include <iostream>
using namespace std;
#include <string>

#include "NonFictionBook.h"

NonFictionBook::NonFictionBook(int i, string c, string t, string a, int y) 
    : Book(i, t, a, y, c)
{
    // uses the parent class' constructor
}

// implement virtual function that compares book call numbers
bool NonFictionBook::lessThan(Book* b)
{
    if (callNumber < b->getCallNumber())
        return true;
    else
        return false;
}
