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

void View::readBookEntry(string& title, string& author, int& id, int& year)
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
}

void View::printLib(Library* library)
{
  library->print();
}
