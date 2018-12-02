#include <iostream>
using namespace std;
#include <string>

#include "NonFictionBook.h"

NonFictionBook::NonFictionBook(int id, string t, string a, int y, string c)
                                : Book(id, t, a ,y, c)
{
    cout << "--Non fiction ctor called" << endl;
}

//compares call numbers
bool NonFictionBook::lessThan(Book* otherBook)
{
    string thisNum = this->getCallNum();
    string oNum = otherBook->getCallNum();

    if(thisNum < oNum)
	return true;
    return false;
}
