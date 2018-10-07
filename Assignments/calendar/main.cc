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

#include "Date.h"

#define MAX_ARR_SIZE  128

int  mainMenu();
void printCalendar(Date arr[MAX_ARR_SIZE], int);


int main()
{
  Date   calendar[MAX_ARR_SIZE];
  int    numDates = 0;
  int    day, month, year;
  int    menuSelection;

  while (1) {
    menuSelection = mainMenu();

    if (menuSelection == 0) 
      break;
    else if (menuSelection == 1) {
      cout << "day:   ";
      cin  >> day;
      cout << "month: ";
      cin  >> month;
      cout << "year:  ";
      cin  >> year;

      calendar[numDates].set(day, month, year);
      ++numDates;
    }
  }

  if (numDates > 0)
    printCalendar(calendar, numDates);

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

