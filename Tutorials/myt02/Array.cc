#include <iostream>
#include <iomanip>
using namespace std;

#include "Array.h"

Array::Array()
{
  size = 0;
}

void Array::Add(Book& b)
{
  elements[size++] = b;
}

void Array::print()
{
  for (int i=0; i<size; ++i)
    elements[i].print();
}
