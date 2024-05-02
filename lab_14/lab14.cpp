#include "lab14.h" // Include the header file for the Queue class declaration

// Constructor to initialize an empty queue with default size 100
Queue::Queue(): front(-1), back(-1), maxQue(100), items(new int[maxQue]){}

// Destructor to clean up dynamically allocated memory to prevent memory leaks
Queue::~Queue(){
    delete[] items;
}

// Constructor to initialize an empty queue with a specified maximum size
Queue::Queue(int max_size): front(-1), back(-1), maxQue(max_size), items(new int[maxQue]){}

// Method to check if the queue is empty
bool Queue::isEmpty() {
    // Reset front and back to -1 if the queue has just become empty
    if(front - 1 == back) {
        front = -1;
        back = -1;
    }
    // The queue is empty if back is -1
    return (back == -1);
}

// Method to check if the queue is full
bool Queue::isFull() const{
    // The queue is full if back is at the last possible index of the items array
    return(back == maxQue - 1);
}

// Method to add a new item to the back of the queue
void Queue::push(int newItem){
    if(isFull()){ // Check if the queue is full and throw an exception if true
        throw "Queue is full.";
    }
    if(isEmpty()){ // If the queue is empty, increment both front and back before adding the item
        front++;
        back++;
        items[back] = newItem; // Store the new item at the back of the queue
    }else{
        back++; // Increment back and store the new item
        items[back] = newItem;
    }
}

// Method to remove the item from the front of the queue
void Queue::pop(){
    if(isEmpty()){ // Check if the queue is empty and throw an exception if true
        throw "Queue is empty.";
    }
    front++; // Increment front to remove the front item
}

// Method to get the item at the front of the queue without removing it
int Queue::lead(){
    if(isEmpty()){ // Check if the queue is empty and throw an exception if true
        throw "Queue is empty.";
    }
    return items[front]; // Return the front item
}
