#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;

class Stack{
private:
    int top;
    int maxStack;
    string* items;
public:
    Stack();

    ~Stack();

    Stack(int max_size);

    bool isEmpty() const;

    bool isFull() const;

    void Push(string newItem);

    void Pop();

    string Top() const;
};