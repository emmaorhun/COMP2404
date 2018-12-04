#include <iostream>
#include <iomanip>
using namespace std;

#include "SchoolEvent.h"

SchoolEvent::SchoolEvent(string n, int p) : Event(n, 0, 0, 0, 0, 0, p){}
SchoolEvent::~SchoolEvent(){
    
}

bool SchoolEvent::operator<(Event* e){
    if(date < e->getDate()) return true;
    return false;
}
