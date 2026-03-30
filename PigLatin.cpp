#include "PigLatin.h"
#include "LinkedList.h"
#include <cctype>

bool PigLatin::isVowel(char ch)
{
    ch = tolower(ch);

    return (ch == 'a' || ch == 'e' || ch == 'i' ||
            ch == 'o' || ch == 'u');
}

string PigLatin::convert(const string& word)
{
    LinkedList list;

    for (char ch : word)
    {
        list.insertLast(ch);
    }

    // If word starts with a vowel, add "way"
    if (isVowel(list.getFirst()))
    {
        list.insertLast('w');
        list.insertLast('a');
        list.insertLast('y');
    }
    else
    {
        // Rotate until the first letter is a vowel
        while (!isVowel(list.getFirst()))
        {
            list.rotate();
        }

        list.insertLast('a');
        list.insertLast('y');
    }

    return list.toString();
}
