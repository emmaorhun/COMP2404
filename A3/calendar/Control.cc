/*
Emma Orhun
101071651
20/11/18
COMP2404
Assignment 3
*/

#include <iostream>
#include <string>

using namespace std;

#include "Control.h"

void Control::launch()
{
  schoolCalendar.set("Emma's School Calendar");
  workCalendar.set("Emma's Work Calendar");
  int minute, hour, day, month, year, selection, priority, type;
  string name;
  string outputWork = "";
  string outputSchool = "";

  while (1)
  {
    selection = -1;
    selection = view.mainMenu(selection);

    //If the user enters 1, continue the menu loop
    if (selection == 1)
    {
      view.acquireEventInfo(type, name, priority, hour, minute, day, month, year);

      if(type == 1){
        schoolCalendar.add(new SchoolEvent(name, priority, hour, minute, day, month, year));
      } 
      else if(type ==2)
      {
        workCalendar.add(new WorkEvent(name, priority, minute, hour, day, month, year));
      }
    } else if (selection == 0)
    {
      break;
    }
  }

  cout << endl;
  workCalendar.format(outputWork);
  view.print(outputWork);
  schoolCalendar.format(outputSchool);
  view.print(outputSchool);
  
}