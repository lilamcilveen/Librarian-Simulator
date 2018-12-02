#ifndef CONTROL_H
#define CONTROL_H

#include "View.h"
#include "Array.h"
#include "Library.h"
class Control
{
    public:
        Control();
        ~Control();
        void launch();

    private:
        Library *lounge; //lounge
        Library *scs;

        View *view;
        
};

#endif
