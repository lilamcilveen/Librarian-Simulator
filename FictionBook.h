#ifndef FICTIONBOOK_H
#define FICTIONBOOK_H

#include "Book.h"

class FictionBook : public Book
{
    public:
        FictionBook(int=0, string = "Unknown", string = "Unknown", int=0,
			string="N/a");
	bool lessThan(Book*);

};

#endif
