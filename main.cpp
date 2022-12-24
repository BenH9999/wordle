#include <iostream>
#include <unordered_set>
#include <ctime>
#include "Word.h"
#include "Game.h"
using namespace std;

int main(){
    std::unordered_set<std::string> realWords;
    string target = "";
    string filename = "valid-wordle-words.txt";

    Word w; 
    Game g;
    
    std::string word;
    std::ifstream file(filename);
    
    while(file >> word) {
        realWords.insert(word);
    }

    g.mainGame(target, realWords);

    return 0;
}