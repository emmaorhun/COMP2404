#ifndef LIST_H
#define LIST_H

#include "Book.h"
using namespace std;

class List
{

    class Node
    {
        friend class List;
        private:
            Book* data;
            Node* next;
            Node* previous;
    };

    public:
        List();
        ~List();
        void add(Book*);
        void print();
    private:
        Node* head;
};

#endif
