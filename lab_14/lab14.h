#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;

// Queue class for managing a queue of integers
class Queue{
private:
    int front; // Index of the front element in the queue
    int back;  // Index of the back element in the queue
    int maxQue; // Maximum capacity of the queue
    int* items; // Dynamically allocated array to store the queue elements

public:
    Queue(); // Default constructor
    ~Queue(); // Destructor to clean up resources

    Queue(int max_size); // Constructor to initialize the queue with a specific size
    
    bool isEmpty(); // Check if the queue is empty
    
    bool isFull() const; // Check if the queue is full

    void push(int newItem); // Add a new item to the back of the queue

    void pop(); // Remove the item from the front of the queue

    int lead(); // Get the item at the front of the queue without removing it
};
