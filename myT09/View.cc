#include <iostream>
#include <iomanip>
using namespace std;

#include "View.h"
#include "Book.h"
#include "Library.h"

void View::mainMenu(int& selection){
    selection  = -1;

    cout << endl;
    cout << "(1) Add book" << endl;
    cout << "(0) Exit" << endl;

    while (selection < 0 || selection > 1) {
        cout << "Enter your selection: ";
        cin  >> selection;
    }

}

void View::readBook(int& id, string& callnum, string& title, string& author, int& year){
    cout << "id:  ";
      cin  >> id;
      cout << "title:   ";
      cin.ignore();
      getline(cin, title);
      cout << "author: ";
      getline(cin, author);
      cout << "year:  ";
      cin  >> year;
      cout << "callnum:  ";
      cin >> callnum;
}

void View::readBookType(string& type){
    int select = 0;
    cout << "fiction(1) or non-fiction(2):  ";
    cin >> select;
    
    if(select==1)
        type = "fiction";
    else
        type = "non-fiction";
}

void View::print(string& outStr){
    cout << outStr;
}
