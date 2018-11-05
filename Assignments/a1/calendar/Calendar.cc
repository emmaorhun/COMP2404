#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

#include "Event.h"
#include "Date.h"
#include "Calendar.h"

Calendar::Calendar(string n)
{
  name = n;
  num_events = 0;
}

Calendar::~Calendar()
{
  for(int j = 0; j < num_events; j++){
    delete events[j];
  }
}

void Calendar::add(Event* e)
{
    int i = 0;
    Date d = e->getDate();
    while(events[i]->getDate().lessThan(d){
      i++;
    }

    num_events++;

    for(int j=num_events; j>i; j--){
      *events[j] = *events[j-1];
    }

    events[i] = e;

}


void Calendar::print()
{
}
