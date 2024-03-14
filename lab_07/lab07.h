#ifndef lab07_h
#define lab07_h
#include <iostream>
#include <string>
#include <cmath>
using namespace std;

// The Sneaker class models a sneaker with attributes for name, size, and color.
class Sneaker{
    private:
        string name; 
        double size; // Size of the sneaker, can represent whole or half sizes
        string color;
    public:
        Sneaker(); // Default constructor - Initializes a new instance of Sneaker with default values
        Sneaker(string n, double s, string c);// Parameterized constructor - Initializes a new instance of Sneaker with specific values for name, size, and color
        string getName();
        double getSize();
        string getColor();
        void whatSneak();
        void setSize(double newSize);// setSize - Sets the size of the sneaker. The size must be a whole number or a half size (e.g., 9, 9.5).
        //Throws std::invalid_argument if newSize is not a whole or half size.
};

#endif