#include <string>
#include "Book.h"
using namespace std;

#define MAX_ARR_SIZE 128

class Array{

    public:
        Array();
        ~Array();
        void add(Book*);
        void print();

    private:
        Book* elements[MAX_ARR_SIZE];
        int size;
};
