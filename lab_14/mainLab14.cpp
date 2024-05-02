#include "lab14.h" // Include the Queue class definition from lab14.h

int main(){

    Queue serveTable(5); // Initialize a Queue object with a capacity of 5

    // Try to add elements to the queue
    try{
        serveTable.push(25); // Attempt to push 25 onto the queue
        serveTable.push(26); // Attempt to push 26 onto the queue
        serveTable.push(27); // Attempt to push 27 onto the queue
        serveTable.push(28); // Attempt to push 28 onto the queue
        serveTable.push(29); // Attempt to push 29 onto the queue
    } catch(const char* except){ // Catch block to handle exceptions from push
        cout << endl << except << endl; // Print the exception message if the queue is full
    }

    cout << endl;

    // Try to remove elements from the queue and print them
    try{
        // Loop until the queue is empty
        for(; !(serveTable.isEmpty()); serveTable.pop()){ // Continue until serveTable is empty
            cout << serveTable.lead() << "\n\n"; // Print the front element and then pop it
        }
    } catch( const char* except){  // Catch block to handle exceptions from lead or pop
        cout << except << endl; // Print the exception message if the queue is empty
    }

    return 0; // End of main function
}
