#ifndef LIST_H
#define LIST_H

#include "Student.h"

class List
{
  class Node
  {
    friend class List;
    private:
      Student* data;
      Node*    next;
  };

  public:
    List();
    ~List();
    void add(Student*);
    void del(const string&);
    void print();

  private:
    Node* head;
};

#endif
