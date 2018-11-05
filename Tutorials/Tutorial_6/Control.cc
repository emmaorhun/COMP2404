#include <iostream>
#include <iomanip>
using namespace std;

#include "Control.h"

void Control::launch(){

    string title, author;
    int id, year;

    while(view.showMainMenu()){

        view.readBook(title, author, id, year);
        library.addBook(new Book(id, title, author, year));
    }

    view.printLibrary(library); 
}

