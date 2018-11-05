#include <iostream>
#include <iomanip>
using namespace std;

#include "Control.h"

void Control::launch()
{
    string title;
    string author;
    int id;
    int year, userChoice;

    while (1)
    {
        userChoice = myView.displayMenu();
        if(userChoice == 1)
        { //if the user wants to add an event, read data they enter and add event
        myView.readBookEntry(title, author, id, year);
        lib->addBook(new Book(id, title, author, year));
        } else if(userChoice == 0)
        { //if the user wants to exit the program
        break;
        }
    }
    myView.printLib(lib);
}
