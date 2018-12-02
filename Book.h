#ifndef BOOK_H
#define BOOK_H

#include <string>
using namespace std;

class Book
{
  public:
    Book(int=0, string="Unknown", string="Unknown", int=0, string ="N/a");
    virtual ~Book() = 0;
    void setBook(int, string, string, int, string);
    void format(string&);
    
    //makes this class abstract
    virtual bool lessThan(Book*) = 0; // virtual function

    string getAuthor();
    string getCallNum();

  protected:
    int    id;
    string title;
    string author;
    int    year;
    string callNum; //call number - t8
};

#endif

