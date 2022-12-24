#ifndef WORD_H
#define WORD_H

#include <unordered_set>
#include <fstream>
#include <string>
#include <cstdlib>
#include <random>

class Word{
    public:   
        std::string findTarget(const std::unordered_set<std::string>& Word);
};

#endif