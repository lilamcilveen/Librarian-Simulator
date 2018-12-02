#include <iostream>
using namespace std;
#include <string>

#include "FictionBook.h"

FictionBook::FictionBook(int id, string t, string a, int y, string c) 
                            : Book(id, t, a, y, c)
{
    cout << "--Fiction ctor called" << endl;
}

//compares authors
bool FictionBook::lessThan(Book* otherBook)
{
    string thisBook = this->getAuthor();
    string oBook = otherBook->getAuthor();
    
    if(thisBook < oBook)
	return true;

    return false;
}
