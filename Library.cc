#include <iostream>
#include <iomanip>
using namespace std;

#include "Library.h"
#include "Book.h"


Library::Library()
{

}
Library::~Library()
{
   // delete collect;
}

void Library::addBook(Book *book)
{
    dLinkList.add(book);
}

void Library::format(string &outStr)
{
    //Calls array's format function
    //collect.format(outStr);
    dLinkList.format(outStr);
}
