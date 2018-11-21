#include "FictionBook.h"
#include <string>
using namespace std;

FictionBook::FictionBook(int i, string c, string t, string a, int y):Book(i, t, a, y, c)
{}

bool FictionBook::lessThan(Book* b){
    if(author.compare(b->getAuthor()) < 0)
        return true;
    return false;
}
