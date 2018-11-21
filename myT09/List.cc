#include "List.h"
#include <iostream>
#include <string>
#include "Book.h"
#include "Array.h"
using namespace std;

List::List(){
    head = NULL;
}

List::~List(){
    Node *currNode, *nextNode;

    currNode = head;
    nextNode = NULL;

    while (currNode != NULL) {
        nextNode = currNode->next;
        delete currNode->data;
        delete currNode;
        currNode = nextNode;
    }
}

void List::add(Book* b){
    Node *currNode, *prevNode, *tempNode;
    currNode = head;
    prevNode = NULL;
    tempNode = new Node;
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

void List::copy(Array& a){
    if(head!=NULL){
        Node* currNode = head;
        while(currNode!=NULL){
            a.add(currNode->data);
            currNode = currNode->next;
        }
    }
}

void List::format(string& outStr){
    if(head!=NULL){
        Node* currNode = head;

        while(currNode != NULL){
            currNode->data->format(outStr);
            currNode = currNode->next;
        }
        outStr += "\n";
        currNode = head;
        while(currNode->next != NULL){
            currNode = currNode->next;
        }
        while(currNode != NULL){
            currNode->data->format(outStr);
            currNode = currNode->prev;
        }
    }
}
