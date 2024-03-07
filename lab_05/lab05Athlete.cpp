#include <iostream>
#include <string>
using namespace std;

// Define a class named Athlete
class Athlete {
public:
  // Default constructor initializes name to "anyAthlete", height to 6.2 feet, and speed to 15 mph
  Athlete() {
    name = "anyAthlete";
    height = 6.2;
    speed = 15;
  }

  // Parameterized constructor initializes name, height, and speed based on provided values
  Athlete(string theName, double theHeight, double theSpeed){
    name = theName;
    height = theHeight;
    speed = theSpeed; 
  }

  // Getter function to return the name of the athlete
  string getName(){
    return name;
  }

  // Getter function to return the height of the athlete
  double getHeight(){
    return height;
  }

  // Getter function to return the speed of the athlete
  double getSpeed(){
    return speed;
  }

  // Function to increase the speed of the athlete by a certain percentage
  void speedGain(double percent){
    speed = speed * (1 + (percent/100));
  }

private:
  string name;    // Name of the athlete
  double height;  // Height of the athlete (in feet)
  double speed;   // Speed of the athlete (in mph)
};

int main(){

  cout << endl;
  cout << "||Athlete created using the Default Constructor||"<< endl;
  cout << endl;
  // Creating an object of the Athlete class using the default constructor
  Athlete athlete1;

  // Displaying the data members of athlete1
  cout << "Athlete Name: " << athlete1.getName() << endl;
  cout << "Athlete Height: " << athlete1.getHeight() << " feet" << endl;
  cout << "Athlete Speed: " << athlete1.getSpeed() << " mph" << endl;

  // Increasing the speed of athlete1 by 10%
  athlete1.speedGain(10);

  // Displaying the updated speed of athlete1
  cout << "Athlete Speed after gaining 10%: " << athlete1.getSpeed() << " mph" << endl;


  cout << endl;
  cout << endl;
  cout << "||Athlete created using the Parameterized Constructor||"<< endl;
  cout << endl;
  Athlete athlete2("Stephen Curry", 5.6,18);
  cout << "Athlete Name: " << athlete2.getName() << endl;
  cout << "Athlete Height: " << athlete2.getHeight() << " feet" << endl;
  cout << "Athlete Speed: " << athlete2.getSpeed() << " mph" << endl;
 
  athlete2.speedGain(50);
  // Displaying the updated speed of athlete2
  cout << "Athlete Speed after gaining 50%: " << athlete2.getSpeed() << " mph" << endl;

  cout << endl;
  cout << endl;
  cout << "||Another Athlete created using the Parameterized Constructor||"<< endl;
  cout << endl;

  Athlete athlete3("Donovan Mitchel", 6.6,20);
  cout << "Athlete Name: " << athlete3.getName() << endl;
  cout << "Athlete Height: " << athlete3.getHeight() << " feet" << endl;
  cout << "Athlete Speed: " << athlete3.getSpeed() << " mph" << endl;

  athlete3.speedGain(24);

  // Displaying the updated speed of athlete2
  cout << "Athlete Speed after gaining 24%: " << athlete3.getSpeed() << " mph" << endl;
  cout << endl;
  
}
