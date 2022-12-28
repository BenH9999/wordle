#ifndef GAME_H
#define GAME_H

#include <string>
#include <iostream>
#include <unordered_set>
#include "Word.h"
#include "Menu.h"
#include <conio.h>
#include <cstdio>
#include <random>

class Game{
    public:
        void mainGame(std::string target, const std::unordered_set<std::string> realWords, std::unordered_set<std::string> chosenWords, int length);
        void display(const std::string target, const std::string input);
    private:
        bool again;
        std::string again2;
        bool valid;
        bool finished, won;
        int count;
        std::string temp;
        std::string input;
        bool validLength;
};

#endif