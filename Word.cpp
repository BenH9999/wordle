#include "Word.h"

std::string Word::findTarget(const std::unordered_set<std::string>& Word){
    int r = rand() % Word.size();
    auto it = Word.begin();
    for(int i = 0; i < r; i++) it++;
    return *it;
}