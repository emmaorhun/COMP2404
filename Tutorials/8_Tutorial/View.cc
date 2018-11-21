#include <iostream>
#include <iomanip>
#include <string>
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

void View::readBook(int &id, string &title, string &author, int &year, int &callNumber){

    cout << "id: ";
    cin  >> id;
    cout << "title: ";
    cin.ignore();
    getline(cin, title);
    cout << "author: ";
    getline(cin, author);
    cout << "year: ";
    cin >> year;
    cout << "call#: ";
    cin >> callNumber;
}

void View::readBookType(string &t){
    cout << "Enter the type of book(Fiction/Non-Fiction): ";
    cin >> t;
}

void View::printLibrary(Library& l){

    l.print();
}
