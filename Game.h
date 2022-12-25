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
        void mainGame(std::string target, const std::unordered_set<std::string> realWords);
        void display(const std::string target, const std::string input);
    private:
        bool again;
        std::string again2;
        bool valid;
        bool finished, won;
        int count;
        int counter[5];
        int placed[5];
        std::string temp;
        char l[5], t[5];
        bool e[5];
        bool c[5];
        std::string input;
};

#endif