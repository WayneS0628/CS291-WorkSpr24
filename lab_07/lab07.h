#ifndef lab07_h
#define lab07_h
#include <iostream>
#include <string>
#include <cmath>
using namespace std;

class Sneaker{
    private:
        string name; 
        double size;
        string color;
    public:
        Sneaker();
        Sneaker(string n, double s, string c);
        string getName();
        double getSize();
        string getColor();
        void whatSneak();
        void setSize(double newSize);
};

#endif