#include "LinkedList.h"
#include <stdexcept>

LinkedList::LinkedList()
{
    head = nullptr;
    tail = nullptr;
}

LinkedList::~LinkedList()
{
    clear();
}

bool LinkedList::isEmpty() const
{
    return head == nullptr;
}

void LinkedList::insertLast(char ch)
{
    Node* newNode = new Node(ch);

    if (isEmpty())
    {
        head = tail = newNode;
    }
    else
    {
        tail->next = newNode;
        tail = newNode;
    }
}

void LinkedList::rotate()
{
    // If the list is empty or has only one node, no rotation is needed.
    if (head == nullptr || head->next == nullptr)
    {
        return;
    }

    Node* temp = head;
    head = head->next;
    temp->next = nullptr;
    tail->next = temp;
    tail = temp;
}

char LinkedList::getFirst() const
{
    if (isEmpty())
    {
        throw runtime_error("List is empty.");
    }

    return head->data;
}

string LinkedList::toString() const
{
    string result = "";
    Node* current = head;

    while (current != nullptr)
    {
        result += current->data;
        current = current->next;
    }

    return result;
}

void LinkedList::clear()
{
    Node* current = head;

    while (current != nullptr)
    {
        Node* temp = current;
        current = current->next;
        delete temp;
    }

    head = nullptr;
    tail = nullptr;
}
