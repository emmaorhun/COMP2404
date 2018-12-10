/*
Emma Orhun
101071651
09/09/18
COMP2404
Assignment 1
*/

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

#include "Event.h"
#include "Date.h"
#include "Calendar.h"

//Constructor
Calendar::Calendar(string n)
{
  name = n;
  num_events = 0;
}

//Deconstructor
Calendar::~Calendar()
{
  //Deletes all pointers && frees dynamic memory
  for(int j = 0; j < num_events; j++){
    delete events[j];
  }
}

void Calendar::add(Event* e)
{

  //Goes through all events and stops when there's an event later than the one being added
  for(int i = 0; i < num_events; i++){
    Date date = events[i]->getDate();

     //if the event passed in is older than the one in array
    if(e->getDate().lessThan(date)){

      num_events++;

      //bumps all events to one higher index to make room
      for(int j = num_events; j > i; j--){
        events[j] = events[j-1];
      }

      //adds new event into array
      events[i] = e;
      return;
    }
  }

  //adds new event into array
  events[num_events] = e;
  num_events++;

}


void Calendar::print()
{
  cout<<endl;
  cout<<"============ "<<name<<" ============"<<endl;
  for(int i = 0; i < num_events; i++){
    events[i]->print();
  }
  cout<<endl;
}
