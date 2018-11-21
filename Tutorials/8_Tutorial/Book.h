#ifndef BOOK_H
#define BOOK_H

#include <string>
using namespace std;

class Book
{
  public:
    Book(int=0, string="Unknown", string="Unknown", int=0, int=0);
    virtual ~Book();
    void setBook(int, string, string, int);
    virtual bool lessThan(Book*)=0;
    void print();

    string getAuthor();
    int getCallNumber();

  protected:
    int     id;
    string  title;
    string  author;
    int     year;
    int     callNumber;
};

#endif

