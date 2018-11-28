#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

#include "View.h"

bool View::displayMenu()
{
  int numOptions;
  int selection;

  while (1)
  {
    numOptions = 1;
    selection = -1;
    cout << endl;
    cout << "(1) Add book" << endl;
    cout << "(0) Exit" << endl;

    while (selection < 0 || selection > numOptions)
    {
      cout << "Enter your selection: ";
      cin >> selection;
    }

    // return based on user selection:
    if (selection == 1)
      return 1; //true
    else
      return 0; //false
  }
}

void View::readEntry(string& title, string& author, int& id, int& year, string& callNumber)
{
  cout << "id: ";
  cin >> id;
  cout << "title: ";
  cin.ignore();
  getline(cin, title);
  cout << "author: ";
  getline(cin, author);
  cout << "year: ";
  cin >> year;
  cout << "call number: ";
  cin >> callNumber;
}

int View::readBookType()
{
  int bookType;
  cout << "Enter which type of book you'd like to add:" << endl;
  cout << "(1) Fiction book" << endl;
  cout << "(0) NonFiction book" << endl;
  cin >> bookType; //store user choice in variable

  // return user book type choice
  return bookType;
}

void View::printLibrary(Library& library)
{
  library.print();
}
