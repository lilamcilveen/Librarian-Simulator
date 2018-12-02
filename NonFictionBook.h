#ifndef NONFICTIONBOOK_H
#define NONFICTIONBOOK_H

#include "Book.h"

class NonFictionBook : public Book
{
    public:
        NonFictionBook(int=0, string = "Unknown", string = "Unknown", int=0, 
			string="N/a");
	bool lessThan(Book*);

};

#endif
