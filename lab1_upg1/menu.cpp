/*
* Filnamn: menu.cpp
* Labb nr: Labb 1 uppgift 1
* Studentens namn: Thomas Nordenmark
*/

#include <iostream>
#include <limits>
#include "menu.h"
using namespace std;

// Constructors
Menu::Menu()
{
    heading = "";
}

Menu::Menu(std::string pHeading)
{
    heading = pHeading;
}

// Setters
void Menu::setHeading(string pHeading)
{
    heading = pHeading;
}
//------------------------------------------------------------------------------
// addItem
//------------------------------------------------------------------------------
// Uppgift: Adds a menu option to the menu
// Indata : pMenuText (string), pEnabled (bool)
// Utdata :
//------------------------------------------------------------------------------
void Menu::addItem(string pMenuText, bool pEnabled)
{
    MenuItem menuitem;

    menuitem.setMenuText(pMenuText);
    menuitem.setEnabled(pEnabled);

    menuvec.push_back(menuitem);
}
//------------------------------------------------------------------------------
// printMenuItems
//------------------------------------------------------------------------------
// Uppgift: Prints menu options
// Indata :
// Utdata :
//------------------------------------------------------------------------------
void Menu::printMenuItems()
{
    int numMenu = 1;

    // Iterate through vector containing menu options
    for(auto i: menuvec)
    {
        // If a particular option is enabled
        if(i.getEnabled())
        {
            // Print option and it's number
            cout << numMenu << ". " << i.getMenuText() << endl;
            numMenu++;
        }
        else
        {
            // Else print option with (*) to indicate it is disabled
            cout << numMenu << ". " << i.getMenuText() << " (*)" << endl;
            numMenu++;
        }
    }
    cout << "(*) = disabled" << endl << endl;
}

//------------------------------------------------------------------------------
// getMenuChoice
//------------------------------------------------------------------------------
// Uppgift: Get user input for menu choice
// Indata : max (int), maximum choices currently in the menu
// Utdata : Menu choice as an integer
//------------------------------------------------------------------------------
int Menu::getMenuChoice(int max)
{
    // Store menu choice
    int menuChoice;

    // Ask for and verify user input
    while((cout << "Menyval: ")
           && (!(cin >> menuChoice)
               || menuChoice < 1
               || menuChoice > max))
    {
        invalidChoice(max);
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

    // Return menu choice as an integer
    return menuChoice;
}

//------------------------------------------------------------------------------
// invalidChoice
//------------------------------------------------------------------------------
// Uppgift: Print error message in case of invalid user input
// Indata : max (int), maximum choices currently in the menu
// Utdata :
//------------------------------------------------------------------------------
void Menu::invalidChoice(int max)
{
    cout << "Please enter a valid choice between 1 and " << max << "." << endl;
}
