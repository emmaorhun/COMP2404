#include <iostream>
#include <iomanip>
using namespace std;

#include "FictionBook.h"

FictionBook::FictionBook(int i, string t, string a, int y, int c) : Book(i, t, a, y, c){}

FictionBook::~FictionBook(){

}

bool FictionBook::lessThan(Book *b){
    if(author.compare(b->getAuthor()) < 0) return true;
    else return false;
}