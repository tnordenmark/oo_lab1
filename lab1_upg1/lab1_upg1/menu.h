/*
* Filnamn: menu.h
* Labb nr: Labb 1 uppgift 1
* Studentens namn: Thomas Nordenmark
*/

#ifndef MENU_H
#define MENU_H
#include <vector>
#include "menuitem.h"

class Menu
{
    private:
        std::vector<MenuItem> menuvec; // Vector containing menu item objects
        std::string heading; // Menu item header
    public:
        // Constructors
        Menu();
        Menu(std::string pHeading);

        // Setters
        void setHeading(std::string pHeading);

        // Getters
        std::string getHeading() const {return heading;}
        std::vector<MenuItem> &getMenuvec() {return menuvec;}

        // Member functions
        void addItem(std::string pMenuText, bool pEnabled);
        void printMenuItems();
        int getMenuChoice(int max);
        void invalidChoice(int max);

};

#endif // MENU_H
