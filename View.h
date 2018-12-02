#ifndef VIEW_H
#define VIEW_H

#include "Array.h"
#include "Library.h"
using namespace std;

class View
{
    public:
        ~View();
        void mainMenu(int*);
        void readInfo(int&, string&, string&, int&, string&);
        void printLibrary(string);
        string readBookType();
    private:
        int getInt();

};

#endif

