#ifndef LIST_H
#define LIST_H

#include "Book.h"
#include "Array.h"

class List{
    class Node {
        friend class List;
        private:
            Book* data;
            Node* next;
            Node* prev;
    };

    public:
        List();
        ~List();
        void add(Book*);
        void copy(Array&);
        void format(string&);
    private:
        Node* head;

};

#endif
