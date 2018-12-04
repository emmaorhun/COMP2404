#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

#include "Calendar.h"
#include "Event.h"

Calendar::Calendar(string n){
    name = n;
    size = 0;
}

void Calendar::add(Event* e){
    events.add(e);
}

void Calendar::setName(string n){
    name = n;
}

void Calendar::copyEvents(Array& arr){
    events.copy(arr);
}

void Calendar::print(){
    cout << endl << endl << name << " Calendar" << endl;
    events.print();
}
