#include <iostream>
#include <iomanip>
#include <string>
#include <sstream>
using namespace std;

#include "Book.h"

Book::Book(int i, string t, string a, int y, string c) 
{ 
  id     = i;
  title  = t;
  author = a;
  year   = y;
  callnum= c; 
}

Book::~Book(){
}

void Book::format(string& outStr)
{
    stringstream  ss;  
    ss << setw(3)  << id
       <<"  Title: "   << setw(40) << title
       <<";  Author: "  << setw(20) << author
       <<";  Year: "    << year 
       <<";  Callnum: " << callnum  <<endl;
    outStr += ss.str();
}

string Book::getAuthor(){
    return author;
}

string Book::getCallnum(){
    return callnum;
}
