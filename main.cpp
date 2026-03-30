#include <iostream>
#include <string>
#include "PigLatin.h"
using namespace std;

int main()
{
    string word;

    cout << "Enter a word: ";
    cin >> word;

    string pigLatinWord = PigLatin::convert(word);

    cout << "Original word: " << word << endl;
    cout << "Pig Latin form: " << pigLatinWord << endl;

    return 0;
}
