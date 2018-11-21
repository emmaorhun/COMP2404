#include <iostream>
#include <iomanip>
using namespace std;

#include "NonFictionBook.h"

NonFictionBook::NonFictionBook(int i, string t, string a, int y, int c) : Book(i, t, a, y, c){}

NonFictionBook::~NonFictionBook(){
    
}

bool NonFictionBook::lessThan(Book *b){ return (callNumber < b->getCallNumber());}