/* * * * * * * * * * * * * * * * * * * * * * * * * */
/*                                                 */
/*  Program:  Simple Event Management System       */
/*  Author:   Christine Laurendeau                 */
/*  Date:     07-JUN-2018                          */
/*                                                 */
/*  (c) 2018 Christine Laurendeau                  */
/*  All rights reserved.  Distribution and         */
/*  reposting, in part or in whole, without the    */
/*  written consent of the author, is illegal.     */
/*                                                 */
/* * * * * * * * * * * * * * * * * * * * * * * * * */

/*
Modifications: Emma Orhun
101071651
09/09/18
COMP2404
Assignment 1
*/

#include <iostream>
using namespace std;
#include <string>

#include "Calendar.h"
#include "Event.h"

int  mainMenu();

int main()
{
  //Declaring variables
  Calendar calendar("shrek's lullaby");
  int    day, month, year, hour, minute;
  int    menuSelection;
  string name;

  while (1) {
    menuSelection = mainMenu();
    //While the user selects the "Add event" option keep the loop going
    if (menuSelection == 0)
      break;
    else if (menuSelection == 1) {
      //Takes user input
      cout << "name: ";
      cin.ignore();
      getline(cin, name);
      cout << "hour:   ";
      cin  >> hour;
      cout << "minute:   ";
      cin  >> minute;
      cout << "day:   ";
      cin  >> day;
      cout << "month: ";
      cin  >> month;
      cout << "year:  ";
      cin  >> year;

      //Creates new event pointer and adds it to the calendar
      Event* temp = new Event(name, day, month, year, hour, minute);
      calendar.add(temp);
    }
  }

  cout<<endl;
  calendar.print(); //Prints all events in calendar
  return 0;
}

int mainMenu()
{
  //Declaring variables
  int numOptions = 1;
  int selection  = -1;

  //Creating menu interface
  cout << endl;
  cout << "(1) Add event" << endl;
  cout << "(0) Exit" << endl;

  //While the user doesn't enter one of the two options given, keep prompting them
  while (selection < 0 || selection > numOptions) {
    cout << "Enter your selection: ";
    cin  >> selection;
  }

  //returns menu option
  return selection;
}
