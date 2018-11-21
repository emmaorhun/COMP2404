#include "NonFictionBook.h"
#include <string>
using namespace std;

NonFictionBook::NonFictionBook(int i, string c, string t, string a, int y):Book(i, t, a, y, c)
{}

bool NonFictionBook::lessThan(Book* b){
    if(stoi(callnum) < stoi(b->getCallnum()))
        return true;
    return false;
}
