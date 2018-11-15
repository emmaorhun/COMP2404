/*
Modifications: Emma Orhun
101071651
06/11/18
COMP2404
Assignment 2
*/

#include <iostream>
#include <string>

using namespace std;

#include "Control.h"

void Control::launch()
{
  calendar.set("My Calendar");
  int minute, hour, day, month, year;
  string name;
  int selection;

  
  while (1)
  {
    selection = view.mainMenu(selection);

    //If the user enters 0, exit the menu loop
    if (selection == 0)
      break;
    
    //if the user enters one, take input and add event to calendar
    else if (selection == 1)
    {
      view.acquireEventInfo(name, minute, hour, day, month, year);

      Event *temp = new Event(name, minute, hour, day, month, year);
      calendar.add(temp);
    }
  }

  string calendarString = "";
  calendar.format(calendarString);
  view.print(calendarString);
}