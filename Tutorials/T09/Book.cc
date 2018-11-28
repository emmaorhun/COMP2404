#include <iostream>
#include <iomanip>
using namespace std;

#include "Book.h"

Book::Book(int i, string t, string a, int y, string c)
{
  id = i;
  title = t;
  author = a;
  year = y;
  callNumber = c;
}

Book::~Book()
{

}

void Book::setBook(int i, string t, string a, int y)
{
  id = i;
  title = t;
  author = a;
  year = y;
}

bool Book::lessThan(Book *book) { return (year < book->year); }

void Book::print()
{
  cout << setw(3) << id
       << "  Title: " << setw(4) << title
       << ";  Author: " << setw(2) << getAuthorName()
       << ";  Year: " << year 
       << " Call Number: " << getCallNumber() << endl;
}

string Book::getAuthorName() { return author; }

string Book::getCallNumber() { return callNumber; }