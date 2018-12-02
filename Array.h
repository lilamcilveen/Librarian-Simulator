#ifndef ARRAY_H
#define ARRAY_H

#include "Book.h"

#include <iostream>
#define MAX_ARR_SIZE 128

class Array
{
    public:
        Array(int = 0);
        ~Array();
        void add(Book*);
        void format(string&);

    private:
        Book *elements[MAX_ARR_SIZE];
        int size;
};

#endif


