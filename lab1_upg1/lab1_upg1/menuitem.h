/*
* Filnamn: menuitem.h
* Labb nr: Labb 1 uppgift 1
* Studentens namn: Thomas Nordenmark
*/

#ifndef MENUITEM_H
#define MENUITEM_H
#include <string>

class MenuItem
{
    private:
        std::string menuText;
        bool enabled;
    public:
        MenuItem();
        MenuItem(std::string pMenuText, bool pEnabled);

        // Setters
        void setMenuText(std::string pMenuText);
        void setEnabled(bool pEnabled);

        // Getters
        std::string getMenuText() const {return menuText;}
        bool getEnabled() const {return enabled;}
};

#endif // MENUITEM_H
