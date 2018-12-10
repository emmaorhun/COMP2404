/*
Emma Orhun
101071651
06/11/18
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
  void print();
  void add(Event *);
  void del(const string &);
  void format(string &);

private:
  Node *head;
};

#endif
