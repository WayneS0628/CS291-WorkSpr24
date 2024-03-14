#include "lab07.h"

Sneaker::Sneaker() : name("(N/A)"), size(0), color("(N/A)"){};

Sneaker::Sneaker(string n, double s, string c) : name(n), size(s), color(c){};

string Sneaker::getName(){
    return name;
};

double Sneaker::getSize(){
    return size; // US size
};

string Sneaker::getColor(){
    return color;
};

void Sneaker::whatSneak(){ // Displays information about the sneaker, including its name, color, and size
    cout << "This sneaker is the " << getName() << "'s and its color is " << getColor() << " in a size " << getSize() << " US \n\n";
};

void Sneaker::setSize(double newSize){ // Sets a new size for the sneaker. The size must be a whole number or a half size. Displays appropriate messages for invalid inputs.
    double decimal = newSize - static_cast<int>(newSize); // Calculate the fractional part of the new size to determine if it's whole or half
    if (newSize <= 0){// Size validation: must not be zero or negative
        cout << name << "'s size can't be zero or below\n\n";
    }else if(decimal < 1e-6 || abs(decimal - 0.5) < 1e-6){// Checks if the new size is a whole number or a half size using floating-point comparison techniques
        size = newSize;
        cout << name << "'s size successfully change to a size " << size << " US\n\n";
    }else {// If the new size is neither a whole number nor a half size, inform the user
        cout << name << "'s size should be either a whole number or a half size\n\n";
    }
};
