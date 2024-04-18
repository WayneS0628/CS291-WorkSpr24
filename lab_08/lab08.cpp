#include "lab08.h"

Soldier::Soldier(): name("Random"), weight(180.0), height(5.9){}

Soldier::Soldier(string n, float w, float h): name(n), weight(w), height(h){}

void Soldier::info(){
    cout << "Solider: " << name << ", Weight: " << weight << " lbs, Height: " << height << " ft\n\n";
}

string Soldier::getName(){
    return name;
}

float Soldier::getWeight(){
    return weight;
}

float Soldier::getHeight(){
    return height;
}




float Avg(Soldier* a, int size){
    float sum = 0;
    float avg = 0;
    int nSize = size;
    if(size == 0){
        return 0;
    }

    for(; size > 0; size--){
        sum += a->getWeight(); 
        a++;
    }

    avg = sum/nSize;
    return avg;
}