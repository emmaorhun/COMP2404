/*
Emma Orhun
101071651
04/12/18
COMP2404
Assignment 4
*/

#include "View.h"

//The UI behind the user selection menu
int View::mainMenu(int &select)
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

//Prints calendar
void View::print(Calendar& calendar)
{
  cout<<endl;
  calendar.print();
}

//Takes user input for a new event
void View::acquireEventInfo(int &type, string &name, int &priority, int &minute, int &hour, int &day, int &month, int &year)
{

  cout << "1 for school, 2 for work\nevent type: ";
  cin >> type;
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
  cout << "priority:  ";
  cin >> priority;
}

