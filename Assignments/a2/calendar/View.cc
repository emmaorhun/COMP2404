/*
Modifications: Emma Orhun
101071651
09/09/18
COMP2404
Assignment 2
*/

#include "View.h"

int View::menu()
{
  int numOptions = 1;
  int selection = -1;

  cout << endl;
  cout << "(1) Add event" << endl;
  cout << "(0) Exit" << endl;

  while (selection < 0 || selection > numOptions)
  {
    cout << "Enter your selection: ";
    cin >> selection;
  }

  return selection;
}

void View::acquireEventInfo(string &name, int &minute, int &hour, int &day, int &month, int &year)
{
  cout << "name: ";
  cin.ignore();
  getline(cin, name);
  cout << "minute:  ";
  cin >> minute;
  cout << "hour:  ";
  cin >> hour;
  cout << "day:   ";
  cin >> day;
  cout << "month: ";
  cin >> month;
  cout << "year:  ";
  cin >> year;
}

void View::printCalendar(Calendar &calendar)
{
  calendar.print();
}