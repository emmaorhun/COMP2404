/*
Emma Orhun
101071651
04/12/18
COMP2404
Assignment 4
*/

#ifndef LIST_H
#define LIST_H

#include <iostream>
using namespace std;

#include "Event.h"
#include "Array.h"

//A class-templated singly linked list to store events

template<typename T>
class List
{

  //hooray for class templates!
  template<typename DT>
  class Node
  {
    friend class List<T>;

  private:
    Node<T> *next;
    T *data;
  };

public:
  List();
  ~List();
  void add(T*);
  void del(const string &);
  void print();
  void copy(Array&);

private:
  Node<T> *head;
};

//Constructor
template<typename T>
List<T>::List()
{
  head = NULL;
}

//Deconstructor
template<typename T>
List<T>::~List()
{ 
  Node<T> *next;
  Node<T> *current;

  current = head;
  while(current != NULL)
  {
    next = current->next;
    delete current->data;
    delete current;
    current = next;
  }
}

template<typename T>
void List<T>::copy(Array& a)
{
  Node<T> *current;
  current = head;

  //traverse linked list and add the data of each node to the array
  while(current != NULL)
  {
    a.add(current->data);
    current = current->next;
  }
}

template<typename T>
void List<T>::add(T *t)
{ 
  Node<T> *prev;
  Node<T> *temp;
  Node<T> *current;

  temp = new Node<T>;
  temp->data = t;
  temp->next = NULL;

  current = head;
  prev = NULL;

  //adds element into appropriate location                       
  while(current != NULL)
  {            
    if(*t < current->data)
    {
        break;          
    }                         
                              
    prev = current;      
    current = current->next;
  }     

  if(prev == NULL)
  {
    head = temp;
  }
  else
  {
    prev->next = temp;
  }

  temp->next = current;
}

template<typename T>
void List<T>::print()
{
  Node<T> *current;
  current = head;

  //Goes through list and prints each node's data
  if(head != NULL)
  {
    while(current != NULL)
    {
      current->data->print();
      current = current->next;
    }
    cout << endl;
  } 
  else 
  {
    cout << "This calendar is empty, yo!" << endl;
  }

}

#endif
