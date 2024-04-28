#ifndef LAB10_H
#define LAB10_H
#include <iostream>
#include <string>
#include <cassert>
using namespace std;

// Node class represents an element in a doubly linked list
class Node{
private:
    string data; // Holds the value of the node
    Node* next; // Pointer to the next node in the list
    Node* previous; // Pointer to the previous node in the list
    friend class List; // Allows List to access Node's private members
    friend class Iterator; // Allows Iterator to access Node's private members
public:
    Node(string s); // Constructor to initialize the node with a string
};

// Iterator class for traversing through the linked list
class Iterator{
private:
    Node* current; // Points to the current node in the iteration
    Node* last; // Points to the last node, used for boundary checks
    friend class List; // Allows List to access Iterator's private members
public:
    string get() const; // Returns the data of the current node
    void next(); // Moves the iterator to the next node
    void previous(); // Moves the iterator to the previous node
    bool equal(const Iterator& b) const; // Checks if two iterators are equal
};

// List class, which is a doubly linked list
class List{
private:
    Node* first; // Pointer to the first node in the list
    Node* last; // Pointer to the last node in the list
public:
    List(); // Constructor initializes an empty list
    void push_back(string s); // Adds a node with the specified value at the end of the list
    bool remove(string value); // Removes the node with the specified value from the list
    void display(); // Prints all elements in the list
    Iterator begin(); // Returns an iterator pointing to the first node
    Iterator end(); // Returns an iterator pointing past the last node
};

#endif
