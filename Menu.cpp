#include "Menu.h"
#include "Game.h"

using namespace std;

void Menu::displayOptions(){
    cout << "++++++++++++++\nWelcome to Wordle!\n\n1. Instructions\n2. Start" << endl;
}

int Menu::getLength(bool validLength, std::unordered_set<std::string> realWords, std::unordered_set<std::string> chosenWords, int length){
    while(!validLength){
            cout << "What difficulty(length of the word) would you like to play the game with?" << endl;
            cin >> length;

            for(const string& Word : realWords){
                if(Word.length() == length) {
                    validLength = true;
                    break;
                }
            }
    }
    return length;
}

void Menu::menu(std::string target, std::unordered_set<std::string> realWords, std::unordered_set<std::string> chosenWords, int length){
    Game g;
    validLength = false;

    displayOptions();
    cin >> input;
    cout << "\u001b[1A";
    switch(input){
        case 1: cout << "Not yet released" << endl;
                menu(target, realWords, chosenWords, length);

        case 2: length = getLength(validLength, realWords, chosenWords, length);
                g.mainGame(target, realWords, chosenWords, length);
                break;
    }
}