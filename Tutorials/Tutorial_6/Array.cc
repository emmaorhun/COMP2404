#include <iostream>
using namespace std;

#include "Array.h"

Array::Array(){
    size = 0;
}

Array::~Array(){
    
    for(int i = 0; i < size; i ++){

        delete elements[i];
    }
}

void Array::add(Book* book){

    if(size < MAX_ARR_SIZE){

        bool isBiggest = true;

        if (size <= 0 ){

            elements[0] = book;
        }else{

            for(int i = 0; i < size; i ++){

                if(book->lessThan(elements[i])){

                    isBiggest = false;
                    for(int j = size; j > i; j --){

                        elements[j] = elements[j - 1];
                    }

                    elements[i] = book;
                    break;
                }
            }

            if(isBiggest){

                elements[size] = book;
            }
        }

        size ++;
    }else{
        cout << "Max capacity of " << MAX_ARR_SIZE << " reached" << endl;
    }
}

void Array::print(){

    if(size > 0){

        for(int i = 0; i < size; i ++){

            elements[i]->print();
        }
        cout << endl;
    }
}
