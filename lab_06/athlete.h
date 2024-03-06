#ifndef ATHLETE_H
#define ATHLETE_H
#include <string>
using namespace std;

class Athlete {
	public:
		Athlete();
		Athlete(string theName, double theHeight, double theSpeed );
		string getName();
		double getHeight();
		double getSpeed();
		void speedGain(double percent);
	private:
		string name;
		double height;
		double speed;
};

#endif