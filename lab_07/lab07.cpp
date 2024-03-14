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

void Sneaker::whatSneak(){
    cout << "This sneaker is the " << getName() << "'s and its color is " << getColor() << " in a size " << getSize() << " US \n\n";
};

void Sneaker::setSize(double newSize){
    double decimal = newSize - static_cast<int>(newSize);
    if (newSize <= 0){
        cout << name << "'s size can't be zero or below\n\n";
    }else if(decimal < 1e-6 || abs(decimal - 0.5) < 1e-6){
        size = newSize;
        cout << name << "'s size successfully change to a size " << size << " US\n\n";
    }else {
        cout << name << "'s size should be either a whole number or a half size\n\n";
    }
};
