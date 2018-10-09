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

#include <iostream>
using namespace std;
#include <string>

#include "Calendar.h"
#include "Event.h"

#define MAX_ARR_SIZE  128

int  mainMenu();
void printCalendar(Date arr[MAX_ARR_SIZE], int);


int main()
{
  Calendar   calendar[MAX_ARR_SIZE];
  int    numDates = 0;
  int    day, month, year, hour, minute;
  int    menuSelection;
  string name;

  while (1) {
    menuSelection = mainMenu();

    if (menuSelection == 0)
      break;
    else if (menuSelection == 1) {
      cout << "name: ";
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

      Event* temp = new Event(name, day, month, year, hour, minute);
      //calendar[numDates].set(day, month, year, hour, minute);
      ++numDates;
    }
  }

  if (numDates > 0)
    //printCalendar(calendar, numDates);

  return 0;
}

int mainMenu()
{
  int numOptions = 1;
  int selection  = -1;

  cout << endl;
  cout << "(1) Add event" << endl;
  cout << "(0) Exit" << endl;

  while (selection < 0 || selection > numOptions) {
    cout << "Enter your selection: ";
    cin  >> selection;
  }

  return selection;
}

void printCalendar(Date arr[MAX_ARR_SIZE], int num)
{
  cout << endl << endl << "CALENDAR: " << endl;

  for (int i=0; i<num; ++i)
    arr[i].printLong();

  cout << endl;
}
