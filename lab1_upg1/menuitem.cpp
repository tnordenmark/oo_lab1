/*
* Filnamn: menuitem.cpp
* Labb nr: Labb 1 uppgift 1
* Studentens namn: Thomas Nordenmark
*/

#include "menuitem.h"
using namespace std;

// Default constructor
MenuItem::MenuItem()
{
    menuText = "";
    enabled = false;
}

// Overloaded constructor
MenuItem::MenuItem(string pMenuText, bool pEnabled)
{
    menuText = pMenuText;
    enabled = pEnabled;
}

// Setters
void MenuItem::setMenuText(string pMenuText)
{
    menuText = pMenuText;
}

void MenuItem::setEnabled(bool pEnabled)
{
    enabled = pEnabled;
}
