#include <iostream>
#include <string>
using namespace std;

class Athlete {
    private:
		string name;
		double height; // in feet
		double speed; // in mph
    public:
    	Athlete() {
	        name = "anyAthlete";
	        height = 6.2;
	        speed = 15;
}
		Athlete(string theName, double theHeight, double theSpeed) : name(theName), height(theHeight), speed(theSpeed){}
		string getName(){
            return name;
        }
		double getHeight(){
            return height;
        }
		double getSpeed(){
            return speed;
        }

		void speedGain(double percent){
            speed = speed * (1 + (percent/100));
        }
};

int main(){

    Athlete athlete1;

}