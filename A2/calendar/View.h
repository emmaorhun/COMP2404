/*
Emma Orhun
101071651
06/11/18
COMP2404
Assignment 1
*/


#ifndef VIEW_H
#define VIEW_H

#include "Calendar.h"
#include <string>
#include <iostream>

//Handles everything the user interacts with. All the UI! Abstraction! Yay!

class View
{
    public:
        int mainMenu(int &);
        void print(string);
        void acquireEventInfo(string &name, int &hour, int &minute, int &day, int &month, int &year);

    private:
};

#endif
