#include <iostream>
#include <string>
#include "athlete.h"
using namespace std;

int main(){
    Athlete athlete1;
    Athlete Kyrie("Kyrie", 6.2, 15);
	Athlete Luka("Luka", 6.7, 12);

	
	cout << endl;
	cout << "Welcome to NBA Training Camp\n";
	cout << endl;
	cout << "Athlete " << Kyrie.getName() << ", Height: " << Kyrie.getHeight() << "feet, " << " Speed: " << Kyrie.getSpeed() << "mph\n";
	cout << "Athlete " << Luka.getName() << ", Height: " << Luka.getHeight() << "feet, " << " Speed: " << Luka.getSpeed() << "mph\n";
	cout << "Athlete " << athlete1.getName() << ", Height: " << athlete1.getHeight() << "feet, " << " Speed: " << athlete1.getSpeed() << "mph\n";
	
	
	Kyrie.speedGain(20);
	Luka.speedGain(20);
	athlete1.speedGain(20);
	
	cout << "---------------------------\n";
	cout << "After NBA Training Camp\n";
	cout << "---------------------------\n";
	
	
	
	cout << "Athlete " << Kyrie.getName() << ", Height: " << Kyrie.getHeight() << "feet, " << " Speed: " << Kyrie.getSpeed() << "mph\n";
	cout << "Athlete " << Luka.getName() << ", Height: " << Luka.getHeight() << "feet, " << " Speed: " << Luka.getSpeed() << "mph\n";
	cout << "Athlete " << athlete1.getName() << ", Height: " << athlete1.getHeight() << "feet, " << " Speed: " << athlete1.getSpeed() << "mph\n";
	cout << endl;
	
	cout<< "You guys have really improved.\n";
	cout << endl;
	cout << "CONGRATULATIONS ON A GREAT TRAINING CAMP!!!\n";
	cout << endl;
}