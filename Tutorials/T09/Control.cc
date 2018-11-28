#include <iostream>
#include <iomanip>
using namespace std;

#include "Control.h"
#include "FictionBook.h"
#include "NonFictionBook.h"

Control::Control()
{
    Array ficBooks;
    Array nonficBooks;

    myServer.retrieve(ficBooks, nonficBooks);

    // loop over each array and add each book in that array
    // into the right library
    for (int i = 0; i < ficBooks.getSize(); i++)
    {
        lounge.addBook(ficBooks.get(i));
    }

    for (int j = 0; j < nonficBooks.getSize(); j++)
    {
        scs.addBook(nonficBooks.get(j));
    }
}

Control::~Control()
{
    // declare two local array objects
    Array ficBooks;
    Array nonficBooks;

    // copy library's books to the right array
    lounge.copyBooks(ficBooks);
    scs.copyBooks(nonficBooks);

    // update the server with the newly added books
    myServer.update(ficBooks, nonficBooks);
}

void Control::launch()
{
    string title, author, callNumber;
    int id, year, userBookType;
    
    //dont need to return int i can just pass by reference for the readBookType!

    while (view.displayMenu())
    {
        userBookType = view.readBookType(); //get user's type of book to be made
        view.readEntry(title, author, id, year, callNumber);
        FictionBook* ficBook;
        NonFictionBook* nonFicBook;

        if(userBookType == 1)
        { //fiction
            ficBook = new FictionBook(id, callNumber, title, author, year);
            lounge.addBook(ficBook);
        }else if(userBookType == 0)
        { //non fiction
            nonFicBook = new NonFictionBook(id, callNumber, title, author, year);
            scs.addBook(nonFicBook);
        }
    }
    // print out both libraries
    view.printLibrary(lounge);
    view.printLibrary(scs);
    //when one of the libs are empty, seg fault so do error checking for that case!!!
}
