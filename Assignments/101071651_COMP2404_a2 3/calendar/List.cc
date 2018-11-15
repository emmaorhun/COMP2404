/*
Emma Orhun
101071651
06/11/18
COMP2404
Assignment 1
*/

#include "Date.h"
#include "List.h"

//Constructor
List::List()
{
  head = NULL;
}

//Deconstructor
List::~List()
{
  Node *currNode, *nextNode;
  currNode = head;

  while (currNode != NULL)
  {
    nextNode = currNode->next;
    delete currNode->data;
    delete currNode;
    currNode = nextNode;
  }
}

//Adds event to linked list
void List::add(Event* event)
{
  Node *tempNode;
  tempNode = new Node;
  Node *currNode;
  Node *prevNode;

  currNode = head;
  prevNode = NULL;

  //Finds the node with a smaller date and then pops it into the list
  while (currNode != NULL)
  {
    Date currDate = currNode->data->getDate();

    if (event->getDate().lessThan(currDate)) 
    {
      break;
    }

    //If it's not smaller than any, add on to the end of list
    prevNode = currNode;
    currNode = currNode->next;
  }

  tempNode->data = event;
  tempNode->next = currNode;

  if (prevNode == NULL)
  {
    head = tempNode;
  }
   else 
  {
    prevNode->next = tempNode;
  }
}

//Prints list
void List::print()
{
  Node *currNode = head;

  //Prints the current node and then bumps it over to the next node
  while (currNode != NULL) {
    currNode->data->print();
    currNode = currNode->next;
  }
}

void List::format(string &outStr)
{
  Node *currNode = head;

  //Prints the current node and then bumps it over to the next node
  while (currNode != NULL) {
    currNode->data->format(outStr);
    currNode = currNode->next;
  }
}