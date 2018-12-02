#include <iostream>
#include <iomanip>
#include <sstream>
using namespace std;

#include "Book.h"

Book::Book(int i, string t, string a, int y, string c) 
{ 
  id     = i;
  title  = t;
  author = a;
  year   = y;
  callNum = c;
}

Book::~Book()
{
}

void Book::setBook(int i, string t, string a, int y, string c) 
{
  id     = i;
  title  = t;
  author = a;
  year   = y;
  callNum = c;
}

void Book::format(string &outStr)
{
    stringstream ss;
    ss << setw(3)  << id
       <<"  Title: "   << setw(40) << title
       <<";     Author: "  << setw(20) << author
       <<";       Year: "  << setw(4)  << year
       <<";   Call #: "<< setw(2) << callNum <<";" << endl;
    outStr = ss.str();
    
    //cout <<"book: " << outStr << endl; //testing to get this all workin
}

bool Book::lessThan(Book* otherBook)
{
    if(year < otherBook->year)
        return true;
    else if(year == otherBook->year)
    {
        if(id < otherBook->id)
            return true;
    }
    return false;
}

string Book::getAuthor()
{
	return author;
}

string Book::getCallNum()
{
	return callNum;
}
