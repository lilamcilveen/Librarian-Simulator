#include <iostream>
#include <sstream>
using namespace std;

#include "List.h"

List::List()
{
  head = NULL;
}

List::~List()
{
  Node *currNode, *nextNode;

  currNode = head;

  while (currNode != NULL) {
    nextNode = currNode->next;
    delete currNode->data; //delete book pointer itself
    delete currNode; //delete the node
    currNode = nextNode;
  }
}


void List::add(Book* book)
{
  Node* tmpNode;
  Node* currNode;
  Node* prevNode;

  tmpNode = new Node;
  tmpNode->data = book;
  tmpNode->prev = NULL;
  tmpNode->next = NULL;

  currNode = head;
  prevNode = NULL;

  while (currNode != NULL) {
    if (book->lessThan(currNode->data))
      break;
    prevNode = currNode;
    currNode = currNode->next;
  }

  //front insertion
  if (prevNode == NULL) {
    head = tmpNode;
    tmpNode->prev = NULL;
  }
  //back to end insertion
  else {
    prevNode->next = tmpNode; //make the next of prev node as new node
  }

  tmpNode->prev = prevNode;
  tmpNode->next = currNode; //make the next of new node as next of prev node

  //required to change pointer of new node's next node
  if(tmpNode->next != NULL)
      tmpNode->next->prev = tmpNode;
}

void List::format(string &outStr)
{
  Node* currNode = head;
  stringstream ss;

  cout << endl<< endl<< "LIBRARY " << endl << "------------" << endl;
  ss << "Books ~ ASCENDING: " << endl;

  //Traversing through link list and printing in forwards order
  while (currNode != NULL) 
  {
    currNode->data->format(outStr); //calls format on the book
    ss << outStr;
    currNode = currNode->next;
  }

  ss << endl << "Books ~ DESCENDING" << endl;

  //Get to the last node, to begin reverse print
  currNode = head; //First we must set currNode to head again
  while(currNode->next != NULL)
      currNode = currNode->next;

  //Now traverse through the list starting at the last node
  while(currNode != NULL)
  {
      currNode->data->format(outStr); //calls format on each book
      ss << outStr;  ///appends book to stream before going to next book
      currNode = currNode->prev; //goes to the next previous node
  }
  ss << endl;
  outStr = ss.str();
}

