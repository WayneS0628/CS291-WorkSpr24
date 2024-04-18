#ifndef LAB08_H
#define LAB08_H
#include <string>
#include <iostream> 
using namespace std;

class Soldier {
    private:
        string name;
        float weight;
        float height;
    public: 
        Soldier();

        Soldier(string n, float w, float h);

        void info();

        string getName();

        float getWeight();

        float getHeight();
};



float Avg(Soldier* a, int size);

#endif