#ifndef PIGLATIN_H
#define PIGLATIN_H

#include <string>
using namespace std;

class PigLatin
{
public:
    static bool isVowel(char ch);
    static string convert(const string& word);
};

#endif
