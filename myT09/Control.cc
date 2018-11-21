#include <iostream>
#include <iomanip>
using namespace std;

#include "Control.h"
#include "Library.h"
#include "View.h"
#include "FictionBook.h"
#include "NonFictionBook.h"
#include "BookServer.h"

Control::Control(){
    Array fic, nonFic;
    ficLib = Library();
    nonFicLib = Library();
    server.retrieve(fic, nonFic);
    for(int i=0; i<fic.getSize();i++){
        ficLib.addBook(fic.get(i));
    }
    for(int i=0; i<nonFic.getSize();i++){
        nonFicLib.addBook(nonFic.get(i));
    }
}

Control::~Control(){
    Array fic, nonFic;
    ficLib.copyBooks(fic);
    nonFicLib.copyBooks(nonFic);
    server.update(fic, nonFic);
}

void Control::launch(){     
    string title, author, type, callnum;
    int    id, year;
    int    menuSelection=-1;

    while (1) {
        view.mainMenu(menuSelection);

        if (menuSelection == 0)
            break;
        else if (menuSelection == 1) {
            view.readBook(id, callnum, title, author, year);
            view.readBookType(type);
            if(type=="fiction"){
                FictionBook *tempBook = new FictionBook(id, callnum, title, author, year);
                ficLib.addBook(tempBook);
            } else {
                NonFictionBook *tempBook = new NonFictionBook(id, callnum, title, author, year);
                nonFicLib.addBook(tempBook);
            }
        }
    }

    string outStr;
    outStr += "Fiction Library\n";
    ficLib.format(outStr);
    outStr += "\nNon-Fiction Library\n";
    nonFicLib.format(outStr);
    view.print(outStr);
}
