#include "lab10.h"

// Node constructor definition
Node::Node(string s): data(s), next(nullptr), previous(nullptr){}

// Returns the data of the current node
string Iterator::get() const{
    assert(current != nullptr); // Assert to ensure current is not null
    return current->data;
}

// Moves the iterator to the next node
void Iterator::next(){
    assert(current != nullptr); // Assert to ensure current is not null
    current = current->next;
}

// Moves the iterator to the previous node
void Iterator::previous(){
    assert(current != nullptr); // Assert to ensure current is not null
    current = current->previous;
}

// Compares two iterators for equality
bool Iterator::equal(const Iterator& b) const{
    return current == b.current;
}

// List constructor to initialize an empty list
List::List(): first(nullptr), last(nullptr){}

// Adds a new node at the end of the list
void List::push_back(string s){
    Node* newnode = new Node(s);
    if(last == nullptr){
        first = newnode;
        last = newnode;
    }else{
        newnode->previous = last;
        last->next = newnode;
        last = newnode;
    }
}

// Removes a node from the list by value
bool List::remove(string value){
    Node* current = first;
    while(current != nullptr){
        if(current->data == value){
            if(current->previous){
                current->previous->next = current->next;
            }else{
                first = current->next;
            }
            if(current->next){
                current->next->previous = current->previous;
            }else{
                last = current->previous;
            }
            delete current;
            return true;
        }
        current = current->next;
    }
    return false;
}

// Displays all elements in the list
void List::display(){
    for(Node* current = first; current != nullptr; current = current->next){
        cout << current->data << " -> ";
    }
    cout << "null\n\n";
}

// Returns an iterator pointing to the first node
Iterator List::begin(){
    Iterator iter;
    iter.current = first;
    iter.last = last;
    return iter;
}

// Returns an iterator pointing past the last node
Iterator List::end(){
    Iterator iter;
    iter.current = nullptr;
    iter.last = last;
    return iter;
}
