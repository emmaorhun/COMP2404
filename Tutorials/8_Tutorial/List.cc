#include <iostream>
using namespace std;

#include "List.h"

List::List(){
    head = NULL;
}

List::~List(){

    Node *currNode;
    Node *nextNode;

    currNode = head;

    while(currNode != NULL){
        nextNode = currNode->next;
        delete currNode->data;
        delete currNode;
        currNode = nextNode;
    }
}

void List::add(Book *b){
    
    Node* tmpNode;
    Node* currNode;
    Node* prevNode;

    tmpNode = new Node;
    tmpNode->data = b;
    tmpNode->next = NULL;
    tmpNode->previous = NULL;

    currNode = head;
    prevNode = NULL;

    while(currNode != NULL){
        if(b->lessThan(currNode->data)){
            currNode->previous = tmpNode;
            break;
        }
        
        prevNode = currNode;
        currNode = currNode->next;
    }

    if(prevNode == NULL){
        head = tmpNode;
    }else{
        prevNode->next = tmpNode;
    }

    tmpNode->next = currNode;
    tmpNode->previous = prevNode;
}

void List::print(){

    Node *currNode;
    Node *prevNode;

    currNode = head;
    prevNode = NULL;

    if(head == NULL){
        cout << "Library is empty" << endl;
    }else{

        while(currNode != NULL){
            currNode->data->print();
            prevNode = currNode;
            currNode = currNode->next;
        }

        cout << endl << endl;
        currNode = prevNode;

        while(currNode != NULL){
            currNode->data->print();
            currNode = currNode->previous;
        }
    }
}
