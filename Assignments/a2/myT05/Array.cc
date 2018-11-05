#include <iostream>
#include <iomanip>
using namespace std;

#include "Array.h"
#include "Book.h"

Array::Array() {
    size = 0;
}

Array::~Array() {

    for(int j = 0; j < size; j++) {
        delete elements[j];
    }

}

void Array::add(Book* b) {

  //to store each element of the events array temporarily
  Book* tempBook = b;

  if(size == 0)
  { //if the array is empty, add the event normally
    elements[size] = b;
    size++; //increment
  }else if(elements[size-1]->lessThan(tempBook))
  {
    elements[size] = b;
    size++;
  }else if (size == MAX_ARR_SIZE)
  {
    return;
  }
  else
  {
    for(int i = 0; i < size; i++)
    {
      tempBook = elements[i];

        if(b->lessThan(tempBook))
        {
            size++;

            int currEventIndex = i;

            for(int k = size; k >= currEventIndex; k--)
            {
                //ensure that k-1 does not go out of array bounds:
                elements[k] = elements[k-1];//move to the right
            }

            elements[currEventIndex] = b;
            break;//exit loop after adding
        }
    }
  }
}

void Array::print() {
    //loop over all the elements in the array and print
    for(int j = 0; j < size; j++) {
        elements[j]->print();
    }
}
