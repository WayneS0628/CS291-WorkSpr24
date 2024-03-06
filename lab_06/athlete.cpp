#include <iostream>
#include <string>
#include "athlete.h"
using namespace std;

Athlete::Athlete() {
	name = "anyAthlete";
	height = 6.2;
	speed = 15;
}

Athlete::Athlete(string theName, double theHeight, double theSpeed) : name(theName), height(theHeight), speed(theSpeed){}

string Athlete::getName(){
	return name;
}

double Athlete::getHeight(){
	return height;
}

double Athlete::getSpeed(){
	return speed;
}

void Athlete::speedGain(double percent){
	speed = speed * (1 + (percent/100.0));
}
