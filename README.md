# Pig-Latin-Converter

# Program Description
This C++ program prompts the user to enter a word and converts the word into Pig Latin. 

The conversion rules are as follows:
- If a word begins with a vowel, "way" is added to the end.
- If a word begins with a consonant, the first letter is moved to the end and "ay" is added.
- If a word begins with multiple consonatns, the program continues rotating letters until the first letter is a vowel.

This program meets the project requirement by storing the characters of the string in a linked list and using a rotate function that removes the first node and places it at the end of the list. 

# Inputs
The user inputs a single word. 

# Outputs
The program outputs:
- The original word
- The Pig Latin version of the word

# How to Compile and Run
Compile: 
Bash
g++ main.cpp LinkedList.cpp PigLatin.cpp -o piglatin

Run:
Bash
./piglatin
