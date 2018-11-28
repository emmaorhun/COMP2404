#ifndef BOOK_H
#define BOOK_H

#include <string>
using namespace std;

class Book
{
public:
  Book(int = 0, string = "Unknown", string = "Unknown", int = 0, string = "Unknown");
  void setBook(int, string, string, int);
  virtual bool lessThan(Book *) = 0; //pure virtual function
  void print();
  string getAuthorName(); // get author name
  string getCallNumber(); //get call number
  virtual ~Book();        // virtual destructor

protected:
  int id;
  string title;
  string author;
  int year;
  string callNumber;
};

#endif
