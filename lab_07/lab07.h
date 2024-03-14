#include <iostream>
#include <string>
using namespace std;

class Sneaker{
    private:
        string name; 
        int size;
        string color;
    public:
        Sneaker();
        Sneaker(string n, int s, string c);
        string getName();
        int getSize();
        string getColor();
        void whatSneak();
        void setSize(int newSize);
};