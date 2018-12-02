#ifndef LIST_H
#define LIST_H

#include "Book.h"

class List
{
  class Node
  {
    friend class List;
    private:
      Book* data;
      Node* prev;
      Node* next;
  };

  public:
    List();
    ~List();
    void add(Book*);
    //void del(const string&);
    void format(string&);

  private:
    Node* head;
};

#endif

