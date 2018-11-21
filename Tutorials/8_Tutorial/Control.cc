#include <iostream>
#include <iomanip>
using namespace std;

#include "Control.h"

void Control::launch(){

    while(view.showMainMenu()){
        view.readBookType(type);
        view.readBook(id, title, author, year, callNumber);
        if(type == "Fiction") loungeLibrary.addBook(new FictionBook(id, title, author, year, callNumber));
        else if(type == "Non-Fiction") scsLibrary.addBook(new NonFictionBook(id, title, author, year, callNumber));
    }

    view.printLibrary(loungeLibrary);
    view.printLibrary(scsLibrary);
}