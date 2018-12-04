#include <iostream>
#include <iomanip>
using namespace std;

#include "Control.h"

Control::Control(){

    Array schoolArr;
    Array workArr;
    evServer.retrieve(schoolArr, workArr);

    for(int i = 0; i < schoolArr.getSize(); i ++)
        schoolCalendar.add(schoolArr.get(i));

    for(int i = 0; i < workArr.getSize(); i ++)
        workCalendar.add(workArr.get(i));
}

Control::~Control(){

    Array schoolArr;
    Array workArr;

    schoolCalendar.copyEvents(schoolArr);
    workCalendar.copyEvents(workArr);
    evServer.update(schoolArr, workArr);
}

void Control::launch(){

    workCalendar.setName("Work");
    schoolCalendar.setName("School");

    while(view.showMainMenu()){
        view.promptEventType(type);
        view.readEvent(name, day, month, year, hour, minute, priority);
        
        if(type == "School"){
            SchoolEvent *tmp = new SchoolEvent(name, priority);
            tmp->setDate(day, month, year, hour, minute);
            schoolCalendar.add(tmp);
        } else if(type == "Work"){
            WorkEvent *tmp = new WorkEvent(name, priority);
            tmp->setDate(day, month, year, hour, minute);
            workCalendar.add(tmp);
        }
    }

    view.printCalendar(schoolCalendar); 
    view.printCalendar(workCalendar);
}

