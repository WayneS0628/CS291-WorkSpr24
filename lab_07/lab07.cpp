#include "lab07.h"

Sneaker() : name("N/A"), size("0"), color("N/A"){};

Sneaker(string n, int s, string c) : name(n), size(s), color(c){};

string getName(){
    return name;
};

int getSize();{
    return size; // US size
};

string getColor(){
    return color;
};

void whatSneak(){
    cout << "This sneaker's the " << getName() << " and it's " << getColor() << " in a size " << getSize() << " US \n\n";
};

void setSize(int newSize){
    if (newSize =< 0){
        cout << name << "'s size can't be zero or below\n\n";
    }else{
        size = newSize
        cout << name << "'s size successfully change to a size " << size << " US\n\n";
    }
};
