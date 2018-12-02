#include <iostream>
#include "Control.h"

using namespace std;

Control::Control()
{
}

Control::~Control()
{
    view = NULL;
    lounge = NULL;
    scs = NULL;
}
 
void Control::launch()
{
    view = new View();

    lounge = new Library();
    scs = new Library();

    int selection;
    string formatOutput;

    while(1)
    {
        string s = "Bonus is working perfectly!";
        selection = -1;
        view->mainMenu(&selection);
        cout << "selection" << selection << endl;

        if(selection == 0)
        {
            //formats library data before printing it
            lounge->format(s);
            //asks view to print it with simple print function 
	    cout << "The Lounge:         [Sorted by AUTHOR]" << endl << endl;
            view->printLibrary(s);

	    cout << "______________________________________________________________________________________________" << endl;

	    scs->format(s);
	    cout << "The SCS:       [Sorted by CALL NUMBER]" << endl << endl;
	    view->printLibrary(s);

            //called here b/c it must be done before it returns~!
            delete view;

            delete lounge;
            delete scs;
	   
            break;
        }
        else if(selection == 1)
        {

	    string tit, aut, call;
	    int d, y;

	    view->readInfo(d, tit, aut, y, call);

	    string category = view-> readBookType();
	
	  // FictionBook *book= new FictionBook(d, tit, aut, y);
	    
	    
	    if(category == "nf")
	    {
		NonFictionBook *book = new NonFictionBook(d, tit, aut, y, call);
		scs->addBook(book);
	    }
	    else
	    {
		FictionBook *book = new FictionBook(d, tit, aut, y, call);
		lounge->addBook(book);
	    }
        }
    }
}
