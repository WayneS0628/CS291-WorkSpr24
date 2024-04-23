#ifndef LAB08_H
#define LAB08_H

#include <string> // Include the string library for string manipulation
#include <iostream> // Include the iostream library for input/output operations
using namespace std; // Use the standard namespace to avoid prefixing std::

// Define the Soldier class
class Soldier {
private:
    string name; // Private member variable to store the soldier's name
    float weight; // Private member variable to store the soldier's weight
    float height; // Private member variable to store the soldier's height
public:
    // Default constructor for the Soldier class
    Soldier();

    // Parameterized constructor for the Soldier class
    Soldier(string n, float w, float h);

    // Member function to display information about the soldier
    void info();

    // Getter function to retrieve the soldier's name
    string getName();

    // Getter function to retrieve the soldier's weight
    float getWeight();

    // Getter function to retrieve the soldier's height
    float getHeight();
};

// Function prototype for calculating the average weight of soldiers
float Avg(Soldier* a, int size);

#endif // End of the LAB08_H header guard
