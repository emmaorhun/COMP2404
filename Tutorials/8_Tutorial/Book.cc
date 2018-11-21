#include <iostream>
#include <iomanip>
using namespace std;

#include "Book.h"

Book::Book(int i, string t, string a, int y, int c) 
{ 
  id     = i;
  title  = t;
  author = a;
  year   = y;
  callNumber = c;
}

Book::~Book(){
  
}

void Book::setBook(int i, string t, string a, int y) 
{
  id     = i;
  title  = t;
  author = a;
  year   = y;
}

//bool Book::lessThan(Book* book){ return (year < book->year); }

void Book::print()
{
  cout << setw(3)  << id
       <<"  Title: "   << setw(4) << title
       <<";  Author: "  << setw(2) << author
       <<";  Year: "    << year << endl
       <<";  Call #: "    << callNumber << endl;
}

string Book::getAuthor(){
  return author;
}

int Book::getCallNumber(){
  return callNumber;
}