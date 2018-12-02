#include <iostream>
#include <string>
#include <sstream>
#include "View.h"
using namespace std;


View::~View()
{
}

void View::mainMenu(int *selection)
{
    *selection = -1;
    int numOptions = 1;

    cout << endl;
    cout << "(1) Add book" << endl;
    cout << "(0) Exit" << endl;
    
    while(*selection < 0 || *selection > numOptions)
    {
        cout << "Enter your selection: ";

        *selection = getInt();
    }
}

void View::readInfo(int &id, string &title, string &author, int &year, string &call)
{ 
    cout << "id: ";
    cin >> id;
    cout << "title: ";
    cin.ignore();
    getline(cin, title);
    cout << "author: ";
    getline(cin, author);
    cout << "year: ";
    cin >> year; 
    cout << "call number: "; //simpler to call call # on all books
    cin.ignore();
    getline(cin, call);
}

void View::printLibrary(string s)
{
    cout << s;
}

string View::readBookType()
{
    string bType;
    cout << "'Fiction' or 'Non-Fiction'" << endl;
    cin >> bType;
    return bType;

}

int View::getInt()
{
    int num;
    cin >> num;
    return num;
}
