#include <iostream>
#include <iomanip>
using namespace std;

#include "View.h"

bool View::showMainMenu(){

    int numOptions;
    int selection;

    while(1){

        numOptions = 1;
        selection = -1;
        cout << endl;
        cout << "(1) Add book" << endl;
        cout << "(0) Exit" << endl;

        while(selection < 0 || selection > numOptions){
            cout << "Enter your selection: ";
            cin >> selection;
        }

        if(selection == 0){
            return false;
        }else if(selection == 1){
           return true; 
        }
    }    
}

void View::readEvent(string &name, int &day, int &month, int &year, int &hour, int &minute, int &priority){

    cout << "Event Name: ";
    cin.ignore();
    getline(cin, name);
    cout << "day: ";
    cin >> day;
    cout << "month: ";
    cin >> month;
    cout << "year: ";
    cin >> year;
    cout << "hour: ";
    cin >> hour;
    cout << "minute: ";
    cin >> minute;
    //cout << "second: ";
    //cin >> second;
    cout << "priority: ";
    cin >> priority;
}

void View::promptEventType(string &type){
    while(true){
        cout << "Enter the event type (School/Work): ";
        cin >> type;
        if(type == "School" || type == "Work")
            break;
    }
}

void View::printCalendar(Calendar& c){
    c.print();
}
