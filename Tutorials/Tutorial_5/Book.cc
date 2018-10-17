#include <iostream>
#include <iomanip>
using namespace std;

#include "Book.h"

Book::Book(int i, string t, string a, int y) 
{ 
  id     = i;
  title  = t;
  author = a;
  year   = y;
}

void Book::setBook(int i, string t, string a, int y) 
{
  id     = i;
  title  = t;
  author = a;
  year   = y;
}

bool Book::lessThan(Book* book){ return (year < book->year); }

void Book::print()
{
  cout << setw(3)  << id
       <<"  Title: "   << setw(4) << title
       <<";  Author: "  << setw(2) << author
       <<";  Year: "    << year << endl;
}

