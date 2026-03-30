#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#include <string>
using namespace std;

struct Node
{
    char data;
    Node* next;

    Node(char ch)
    {
        data = ch;
        next = nullptr;
    }
};

class LinkedList
{
private:
    Node* head;
    Node* tail;

public:
    LinkedList();
    ~LinkedList();

    bool isEmpty() const;
    void insertLast(char ch);
    void rotate();
    char getFirst() const;
    string toString() const;
    void clear();
};

#endif
