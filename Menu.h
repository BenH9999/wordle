#ifndef MENU_H
#define MENU_H

#include <string>
#include <iostream>
#include <unordered_set>

class Menu{
    public:
        void menu(std::string target, std::unordered_set<std::string> realWords, std::unordered_set<std::string> chosenWords, int length);
        int getLength(bool validLength, std::unordered_set<std::string> realWords, std::unordered_set<std::string> chosenWords, int length);
        void displayOptions();
        void setChosenWords(int length, std::unordered_set<std::string> realWords, std::unordered_set<std::string> chosenWords);
    private:
        int input;
        int validLength;
};

#endif