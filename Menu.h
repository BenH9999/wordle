#ifndef MENU_H
#define MENU_H

#include <string>
#include <iostream>
#include <unordered_set>

class Menu{
    public:
        void menu(std::string target, std::unordered_set<std::string> realWords);
        void displayOptions();
    private:
        int input;
};

#endif