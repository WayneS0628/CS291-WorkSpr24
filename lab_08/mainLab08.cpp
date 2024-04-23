#include "lab08.h" // Include the header file to access declarations

int main(void) {
    // Create an array of Soldier objects dynamically with size 5
    Soldier* soldier_array = new Soldier[5];

    // Initialize the first two soldiers in the array with specific values
    soldier_array[0] = Soldier("John", 210, 6.0);
    soldier_array[1] = Soldier("Chris", 250, 6.5);

    cout << "\n\n"; // Print newline characters for spacing

    // Loop through the soldier_array and display information for each soldier
    for (int i = 0; i < 5; i++) {
        soldier_array[i].info();
    }

    cout << "\n\n"; // Print newline characters for spacing

    // Calculate and display the average weight of all soldiers in the array
    cout << "The average weight of all the soldiers is " << Avg(soldier_array, 5) << " lbs!!";

    cout << "\n\n"; // Print newline characters for spacing

    delete[] soldier_array; // Deallocate the dynamically allocated array

    return 0; // Return 0 to indicate successful execution
}
