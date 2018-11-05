#include <iostream>
using namespace std;

#include "List.h"

List::List()
{
  head = NULL;
}

List::~List()
{
  Node *currNode, *nextNode;

  currNode = head;

  while (currNode != NULL) {
    nextNode = currNode->next;
    delete currNode;
    currNode = nextNode;
  }
}

void List::add(Book* newBook)
{
  Node* tmpNode;
  Node* currNode;
  Node* prevNode;

  tmpNode = new Node;
  tmpNode->data = newBook;
  tmpNode->next = NULL;

  currNode = head;
  prevNode = NULL;

  while (currNode != NULL) {
    if (newBook->lessThan(currNode->data))
      break;
    prevNode = currNode;
    currNode = currNode->next;
  }

  if (prevNode == NULL) {
    head = tmpNode;
  }
  else {
    prevNode->next = tmpNode;
  }

  tmpNode->next = currNode;
}

void List::del(const string& name)
{
//   Node *currNode, *prevNode;

//   prevNode = NULL;
//   currNode = head;

//   if (head == NULL)
//     return;

//   while (currNode != NULL) {
//     if (currNode->data->getName() == name)
//       break;
//     prevNode = currNode;
//     currNode = currNode->next;
//   }

// /* Equivalent for loop

//   for (currNode=head, prevNode=NULL;
//        currNode != NULL;
//        prevNode=currNode, currNode=currNode->next) {

//   }
// */

//   if (currNode == NULL)
//     return;

//   if (prevNode == NULL)
//     head = currNode->next;
//   else
//     prevNode->next = currNode->next;

//   delete currNode;

}

void List::print()
{
//   Node* backNode = NULL;
  Node* currNode = head;

  while (currNode != NULL) {
      currNode->data->print();
      currNode = currNode->next;
  }

  while (currNode != head) {

  }

}
