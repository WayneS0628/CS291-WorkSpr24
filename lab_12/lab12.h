#include <iostream>
#include <cstdlib>
using namespace std;

class Stack{
private:
    int top;
    int maxStack;
    int* items;
public:
    Stack();

    ~Stack();

    Stack(int max_size);

    bool isEmpty() const;

    bool isFull() const;

    void Push(int newItem);

    void Pop();

    int Top() const;
};