#include <iostream>
#include <unordered_set>
#include <ctime>
#include "Word.h"
#include "Game.h"
#include "Menu.h"

using namespace std;

int main(){
    std::unordered_set<std::string> realWords;
    std::unordered_set<std::string> chosenWords;
    int length = 5;
    string target = "";
    string filename = "allWords.txt";

    Word w; 
    Menu m;
    
    std::string word;
    std::ifstream file(filename);
    
    while(file >> word) {
        realWords.insert(word);
    }

    m.menu(target, realWords, chosenWords, length);

    return 0;
}