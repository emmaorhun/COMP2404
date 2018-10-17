#include <iostream>
#include <iomanip>
using namespace std;

#include "View.h"
#include "Library.h"

void View::menu()
{
  Library library;

  string title, author;
  int id, year;
  int menuSelection;

  while (1)
  {
    menuSelection = getOption();

    if (menuSelection == 0)
      break;
    else if (menuSelection == 1)
    {
      cout << "id:  ";
      cin >> id;
      cout << "title:   ";
      cin.ignore();
      getline(cin, title);
      cout << "author: ";
      getline(cin, author);
      cout << "year:  ";
      cin >> year;

      library.addBook(new Book(id, title, author, year));
    }
  }

  library.print();
}

int View::getOption()
{
  int numOptions = 1;
  int selection = -1;

  cout << endl;
  cout << "(1) Add book" << endl;
  cout << "(0) Exit" << endl;

  while (selection < 0 || selection > numOptions)
  {
    cout << "Enter your selection: ";
    cin >> selection;
  }

  return selection;
}

void View::printLibrary(Library library)
{
  library.print();
}
