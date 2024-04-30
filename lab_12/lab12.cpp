#include "lab12.h"

Stack::Stack(): maxStack(100), top(-1), items(new int[maxStack]){}

Stack::~Stack(){
    delete[] items;
}

Stack::Stack(int max_size): maxStack(max_size), top(-1), items(new int[maxStack]){}

bool Stack::isEmpty() const{
    return(top == -1);
}

bool Stack::isFull() const{
    return (top == maxStack-1);
}

void Stack::Push(int newItem){
    if(isFull()){
        throw "Stack is full.";
    }
    top++;
    *(items+top) = newItem;
}

void Stack::Pop(){
    if(isEmpty()){
        throw "Stack is empty.";
    }
    top--;
}

int Stack::Top() const{
    if(isEmpty()){
        throw "Stack is empty.";
    }
    return *(items+top);
}
