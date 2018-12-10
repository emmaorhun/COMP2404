/*
Emma Orhun
101071651
04/12/18
COMP2404
Assignment 4
*/


#ifndef ARRAY_H
#define ARRAY_H

#include "Event.h"
using namespace std;

#define MAX_SIZE  128


class Array
{
  public:
    Array();
    ~Array();
    void   add(Event*);
    int    getSize();
    Event* get(int);
    void   print();
  private:
    Event* elements[MAX_SIZE];
    int    size;
};

#endif
