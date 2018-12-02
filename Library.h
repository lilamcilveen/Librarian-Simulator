#ifndef LIBRARY_H
#define LIBRARY_H

#include <string>

#include "FictionBook.h"
#include "NonFictionBook.h"
#include "Array.h"
#include "List.h"

//#define MAX_ARR_SIZE 128

class Library
{
    public:
        Library();
        ~Library();
        void addBook(Book*);
        void format(string&);
    private:
        Array collect;
        List dLinkList;


};

#endif
