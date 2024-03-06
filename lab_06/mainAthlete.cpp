#include <iostream>
#include <string>
#include "athlete.h"
using namespace std;

int main(){
    Athlete athlete1;
    Athlete Kyrie("Kyrie", 6.2, 15);
	Athlete Luka("Luka", 6.7, 12);
	
	cout << "Welcome to NBA Training Camp\n";
	cout << "Athlete " << Kyrie.getName() << ", Height: " << Kyrie.getHeight() << "feet, " << " Speed: " << Kyrie.getSpeed() << "mph\n";
	cout << "Athlete " << Luka.getName() << ", Height: " << Luka.getHeight() << "feet, " << " Speed: " << Luka.getSpeed() << "mph\n";
	
	
	Kyrie.addAccleration(20);
	Luka.addAccleration(20);
	
	cout << "---------------------------\n";
	cout << "After NBA Training Camp\n";
	cout << "---------------------------\n";
	
	
	
	cout << "Athlete " << Kyrie.getName() << ", Height: " << Kyrie.getHeight() << "feet, " << " Speed: " << Kyrie.getSpeed() << "mph\n";
	cout << "Athlete " << Luka.getName() << ", Height: " << Luka.getHeight() << "feet, " << " Speed: " << Luka.getSpeed() << "mph\n";
	
	cout<< "You guys have really improved.\n";
	cout << "CONGRATULATIONS ON A GREAT TRAINING CAMP!!!";
}
