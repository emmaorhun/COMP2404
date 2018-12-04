#include <iostream>
using namespace std;

#include "List.h"

template<typename T>
List<T>::List(){
    head = NULL;
}

template<typename T>
List<T>::~List(){

    Node<T> *currNode;
    Node<T> *nextNode;

    currNode = head;

    while(currNode != NULL){
        nextNode = currNode->next;
        delete currNode->data;
        delete currNode;
        currNode = nextNode;
    }
}

template<typename T>
void List<T>::add(T *b){
    
    Node<T>* tmpNode;
    Node<T>* currNode;
    Node<T>* prevNode;

    tmpNode = new Node<T>;
    tmpNode->data = b;
    tmpNode->next = NULL;

    currNode = head;
    prevNode = NULL;

    while(currNode != NULL){
        if(b < currNode->data){
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
}

template<typename T>
void List<T>::copy(Array& arr){
    Node<T> *currNode;
    currNode = head;

    while(currNode != NULL){
        arr.add(currNode->data);
        currNode = currNode->next;
    }
}

template<typename T>
void List<T>::print(){

    Node<T> *currNode;
    Node<T> *prevNode;

    currNode = head;
    prevNode = NULL;

    if(head == NULL){
        cout << "Calendar is empty" << endl;
    }else{

        while(currNode != NULL){
            currNode->data->print();
            prevNode = currNode;
            currNode = currNode->next;
        }

        cout << endl << endl;
    }
}
