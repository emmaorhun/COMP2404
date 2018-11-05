#include <iostream>
using namespace std;

#include "List.h"


int main()
{
  Student matilda("100567899", "Matilda", "CS", 9.0f);
  Student harold("100777888", "Harold", "Geography", 7.5f);
  Student joe("100777888", "Joe", "Physics", 8.3f);
  Student timmy("100333444", "Timmy", "CS", 11.5f);
  Student amy("100123444", "Amy", "Math", 10.8f);

  List comp2404;

  comp2404.add(&harold);
  comp2404.add(&matilda);
  comp2404.add(&joe);
  comp2404.add(&timmy);
  comp2404.add(&amy);

  cout << "ORIGINAL LIST: " << endl;
  comp2404.print();

  comp2404.del("Joe");
  comp2404.del("Timmy");
  comp2404.del("Amy");
  comp2404.del("Gregory");


  cout << endl << endl << "NEW LIST: " << endl;
  comp2404.print();


  return 0;
}

