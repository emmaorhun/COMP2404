/*
Emma Orhun
101071651
04/12/18
COMP2404
Assignment 4
*/


#include <iostream>
#include <string>

using namespace std;

#include "Control.h"

//Constructor
Control::Control()
{
  Array work;
  Array school;

  //populates the arrays with the server data
  server.retrieve(work, school);


  //adds data to calendar
  for(int i=0; i < work.getSize(); i++){
    workCalendar.add(work.get(i));
  }

  for(int i=0; i < school.getSize(); i++){
    schoolCalendar.add(school.get(i));
  }
}

//Deconstructor
Control::~Control(){

  Array work;
  Array school;

  workCalendar.copyEvents(work);
  schoolCalendar.copyEvents(school);
  server.update(work, school);

}

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
        SchoolEvent *event = new SchoolEvent(name, priority);
        event->setDate(day, month, year, hour, minute);
        schoolCalendar.add(event);
      } 
      else if(type ==2)
      {
        WorkEvent *event = new WorkEvent(name, priority);
        event->setDate(day, month, year, hour, minute);
        workCalendar.add(event);
      }
    } else if (selection == 0)
    {
      break;
    }
  }

  //prints calendars
  view.print(workCalendar);
  view.print(schoolCalendar);
  
}