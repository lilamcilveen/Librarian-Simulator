#include <iostream>
#include <sstream>
using namespace std;
 
#include "Array.h"
#include "Book.h"

Array::Array(int n)
{
    size = n;
}

Array::~Array()
{
 //   for(int i =0; i < size; i++)
 //       delete elements[i];
}

void Array::add(Book *newBook)
{
    if(size == 0)
    {
        elements[size] = newBook;
    }
    for(int i = 0; i < size; i++)
    {
       // Book book1 = newBook;
        Book *book2 = elements[i];
        if(book2->lessThan(newBook))
        {
            if(i == size -1)
                elements[size] = newBook;
        }
        else
        {
            for(int j = size -1; j >= i; j--)
                elements[j+1] = elements[j];
            elements[i] = newBook;
            break;
        }
    }
    size++;

}

void Array::format(string &outStr)
{
    cout << endl << endl << "LIBRARY: " << endl;

    stringstream ss;
    for (int i = 0; i < size; ++i)
    {
        string s = ss.str();
        elements[i]->format(outStr); //calls format on each book
        ss << outStr; //appends book to stream before going to next book
    }
    outStr = ss.str();
    ss << endl;

   // cout <<"array: " << outStr << endl;
}

