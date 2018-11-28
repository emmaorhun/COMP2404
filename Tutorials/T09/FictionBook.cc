#include <iostream>
using namespace std;
#include <string>

#include "FictionBook.h"
#include "Book.h"

FictionBook::FictionBook(int i, string c, string t, string a, int y) 
    : Book(i, t, a, y, c)
{
    // uses the parent class' constructor
}

// implement virtual function to compare authors
bool FictionBook::lessThan(Book* b)
{
    if (author < b->getAuthorName())
        return true;
    else
        return false;
}
