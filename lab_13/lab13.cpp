#include <iostream>  // Include the input/output library for usage of std::cout
#include <queue>     // Include the queue container from the Standard Library
using namespace std; // Use the standard namespace to avoid typing "std::" before common elements like cout

int main() {
    // Create a queue of integers named 'nums'
    queue<int> nums;

    // Push integers onto the queue in order
    nums.push(-1);   // Pushes -1 to the back of the queue
    nums.push(7);    // Pushes 7 to the back of the queue
    nums.push(15);   // Pushes 15 to the back of the queue
    nums.push(21);   // Pushes 21 to the back of the queue
    nums.push(35);   // Pushes 35 to the back of the queue
    nums.push(70);   // Pushes 70 to the back of the queue
    nums.push(190);  // Pushes 190 to the back of the queue

    cout << endl;  // Print a newline for better formatting before outputting numbers

    // Loop until the queue is empty
    for (; nums.size() > 0; nums.pop()) {
        // Print the front element of the queue and then remove it
        cout << nums.front() << "  ";
    }
    
    cout << endl << endl;  // Print two newlines for better formatting after the loop

    return 0;  // Return 0 to indicate that the program ended successfully
}
