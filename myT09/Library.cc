#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

#include "Book.h"
#include "Library.h"
#include "List.h"
#include "Array.h"

Library::Library(){

}

void Library::addBook(Book* b){
    bookArray.add(b);
}

void Library::copyBooks(Array& a){
    bookArray.copy(a); 
}

void Library::format(string& outStr){
    bookArray.format(outStr);
}
