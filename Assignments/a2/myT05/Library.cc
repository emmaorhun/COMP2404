#include <iostream>
#include <iomanip>
using namespace std;

#include "Library.h"
#include "Book.h"
#include "Array.h"

Library::Library() {
}

void Library::print() {
    arr.print();
}

void Library::addBook(Book* b) {
    arr.add(b);
}

