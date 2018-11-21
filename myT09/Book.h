#ifndef BOOK_H
#define BOOK_H

#include <string>
using namespace std;
#include <vector>

class Book
{
  public:
    Book(int=0, string="Unknown", string="Unknown", int=0, string="0");
    virtual ~Book();
    string getAuthor();
    string getCallnum();
    void format(string&);
    virtual bool lessThan(Book*)=0;
  protected:
    int    id;
    string title;
    string author;
    int    year;
    string    callnum;
};

#endif

