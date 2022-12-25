#include "Menu.h"
#include "Game.h"

using namespace std;

void Menu::displayOptions(){
    cout << "++++++++++++++\nWelcome to Wordle!\n\n1. Instructions\n2. Start" << endl;
}

void Menu::menu(std::string target, std::unordered_set<std::string> realWords){
    Game g;

    displayOptions();
    cin >> input;
    cout << "\u001b[1A";
    switch(input){
        case 1: cout << "Not yet released" << endl;
                menu(target, realWords);
        case 2: g.mainGame(target, realWords);
    }
}