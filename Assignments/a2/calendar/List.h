/*
Emma Orhun
101071651
09/09/18
COMP2404
Assignment 1
*/

#ifndef LIST_H
#define LIST_H

#include <iostream>
using namespace std;

#include "Event.h"

//A singly linked list to store events

class List
{
  class Node
  {
    friend class List;

  private:
    Event *data;
    Node *next;
  };

public:
  List();
  ~List();
  void add(Event *);
  void del(const string &);
  void print();

private:
  Node *head;
};

#endif
