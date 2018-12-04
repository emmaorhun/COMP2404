#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

#include "Event.h"
#include "Date.h"

Event::Event(string n, int d, int m, int y, int h, int min, int p){

    name = n;
    priority = p;
    setDate(d, m, y, h, min);
}

Event::~Event(){
    
}

void Event::setDate(int d, int m, int y, int h, int min){

    date.set(d, m, y, h, min);
}

void Event::print(){

    cout << "Event: " << name << ", Priority: " << priority << endl;
    date.printLong();
}

Date& Event::getDate(){

    return date;
}

int Event::getPriority(){
    return priority;
}
