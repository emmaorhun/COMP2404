#ifndef LIST_H
#define LIST_H


#include <iostream>
#include <string>
#include "Book.h"
#include "Array.h"
template <class T>
class List
{
  class Node
  {
    friend class List;
    private:
      T data;
      Node* next;
      Node* prev;
  };

  public:
    List();
    ~List();
    void add(T *);
    void del(const string&);
    void print();
    void copy(Array&);

  private:
    Node* head; //data member for head of list
};

#endif

template <class T>
List<T>::List(){
    head = NULL;
}

template <class T>
List<T>::~List(){
    Node *currNode, *nextNode;

    currNode = head;
    nextNode = NULL;

    //deallocate memory for the pointers
    while (currNode != NULL) {
        nextNode = currNode->next;
        delete currNode->data;
        delete currNode;
        currNode = nextNode;
    }
}

template <class T>
void List<T>::add(T* b){
    Node *currNode, *prevNode, *tempNode;

    currNode = head;
    prevNode = NULL;
    tempNode = new Node;

    //storing the Book parameter in a pointer
    tempNode->data = b;
    tempNode->next = NULL;
    tempNode->prev = NULL;

    while(currNode != NULL){
        if(b->lessThan(currNode->data)){
            break;        
        }   
        prevNode = currNode;
        currNode = currNode->next;
    }

    if(prevNode == NULL){
        head = tempNode;
    } else {
        prevNode->next = tempNode;
    }

    tempNode->next = currNode;
    tempNode->prev = prevNode;
    if(currNode != NULL)
        currNode->prev = tempNode;
}

template <class T>
void List<T>::print(){
    Node* currNode = head;

    while(currNode != NULL){
      currNode->data->print();
      currNode = currNode->next;
    }
    
    currNode = head;
    while(currNode->next != NULL){
        currNode = currNode->next;
    }

    cout << endl;

    //go backwards
    while(currNode != NULL){
      currNode->data->print();
      currNode = currNode->prev;
    }
}

template <class T>
void List<T>::copy(Array& arr){
    Node* currNode = head;

    while(currNode != NULL){
        arr.add(currNode->data);
        currNode = currNode->next;
    }
}

