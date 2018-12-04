#include <iostream>
#include <iomanip>
using namespace std;

#include "WorkEvent.h"

WorkEvent::WorkEvent(string n, int p) : Event(n, 0, 0, 0, 0, 0, p){}
WorkEvent::~WorkEvent(){
    
}

bool WorkEvent::operator<(Event* e){
    if(priority < e->getPriority()) return true;
    return false;
}
