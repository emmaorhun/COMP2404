#include <iostream>
#include <iomanip>
using namespace std;

#include "Array.h"

Array::Array()
{
  size = 0;
}

Array::~Array() {

    for(int z = 0; z < size; z++) {
        delete elements[z];
    }

}

void Array::Add(Book* b)
{
  int i = 0;
  while(!b->lessThan(elements[i])){
    i++;
  }

  size++;
  for(int j = size; j > i; j--){
    *elements[j] = *elements[j-1];
  }

  *elements[i] = *b;

}

void Array::print()
{
  for (int i=0; i<size; ++i)
    elements[i]->print();
}
