#include <iostream>
#include <iomanip>
using namespace std;

#include "Library.h"

void Library::addBook(Book* book){
    inventory.add(book);
}

void Library::print(){
    cout << "Library:" << endl;
    inventory.print();
}
