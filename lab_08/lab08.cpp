#include "lab08.h" // Include the header file to access declarations

// Default constructor definition
Soldier::Soldier(): name("Random"), weight(180.0), height(5.9) {}

// Parameterized constructor definition
Soldier::Soldier(string n, float w, float h): name(n), weight(w), height(h) {}

// Member function to display soldier information
void Soldier::info() {
    cout << "Soldier: " << name << ", Weight: " << weight << " lbs, Height: " << height << " ft\n\n";
}

// Getter function to retrieve soldier's name
string Soldier::getName() {
    return name;
}

// Getter function to retrieve soldier's weight
float Soldier::getWeight() {
    return weight;
}

// Getter function to retrieve soldier's height
float Soldier::getHeight() {
    return height;
}

// Function to calculate the average weight of soldiers
float Avg(Soldier* a, int size) {
    float sum = 0; // Variable to store the sum of weights
    float avg = 0; // Variable to store the average weight
    int nSize = size; // Store the original size for average calculation
    if (size == 0) { // Check if the array is empty
        return 0; // Return 0 if the array is empty
    }

    for (; size > 0; size--) { // Loop through the array of soldiers
        sum += a->getWeight(); // Add each soldier's weight to the sum
        a++; // Move to the next soldier in the array
    }

    avg = sum / nSize; // Calculate the average weight
    return avg; // Return the average weight
}
