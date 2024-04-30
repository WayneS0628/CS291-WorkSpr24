#include <iostream>
#include <string>
#include <stack>
using namespace std;

int main() {
    // Create a stack of integers named 'nums'
    stack<int> nums;

    // Push integers onto the stack
    nums.push(190); // Pushes 190 onto the stack
    nums.push(70);  // Pushes 70 onto the stack
    nums.push(35);  // Pushes 35 onto the stack
    nums.push(21);  // Pushes 21 onto the stack
    nums.push(15);  // Pushes 15 onto the stack
    nums.push(7);   // Pushes 7 onto the stack
    nums.push(-1);  // Pushes -1 onto the stack

    cout << endl; // Print a newline for better formatting

    // Loop until the stack is empty
    for (; nums.size() > 0; nums.pop()) {
        // Print the top element of the stack
        cout << nums.top() << "  ";
    }
    
    cout << endl << endl; // Print two newlines for better formatting after the loop
}
