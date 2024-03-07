#include <iostream> 
using namespace std;

int main(void){
    int num0 = 0, num1 = 0;
    string name;

    cout << "\n\nPlease enter the following for your personalized adventure\n";
    cout << "\nEnter a number: ";
    cin >> num0;
    cout << "\nEnter a number, smaller than the first: ";
    cin >> num1;
    cout << "\nEnter your last name: ";
    cin >> name;

    cout << "\n\nA brave group of " << num0 << " set out on a quest -- in search \nof the lost treasure of the Ancient Dwarves. The group was led by that legendary \nrogue, " << name << ". \n\n";
    cout << "Along the way, a band of marauding ogres ambushed the party. All \nfought bravely under the command of " << name <<", and the ogres were defeated, but \nat a cost. Of the adventurers, " << num1 << " were vanquished, leaving just \n" << num0 - num1 <<" in the group.\n\n";
    cout << "The party was about to give up all hope. But while laying the deceased \nto rest, they stumbled upon the buried fortune. So the adventures split 900 gold \npieces. ";

    if ((900%(num0-num1)) > 0){
        cout << name <<  " held on to the extra " << 900%(num0-num1) << " pieces to keep things fair of course.\n\n";
    }

    cout << "\n";

}