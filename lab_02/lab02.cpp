#include <iostream> 
#include <cstdlib>
#include <ctime>
using namespace std;

int genRanNum(){

    srand(static_cast<unsigned int>(time(NULL)));

    int r = 1 + (rand() % 100);

    return r;

};

int main(void){

    int theNum = genRanNum();
    int guess = 0;
    

    cout << endl << "Welcome to guess my number!" << endl;
    cout << endl << "I have a number in my head from 1 - 100" << endl;

    for (int attempt = 1; attempt < 10; attempt++){
        cout << "Enter a guess: ";
        cin >> guess;
        if(guess > theNum){
            cout << "Too high!\n\n";
        }else if(guess < theNum) {
            cout << "Too low!\n\n";
        } else {
            cout << "Congratulations! You got it in " << attempt << " tries!!\n\n";
            return 0;
        }
    }

    cout << "Sorry, but you have tried too many times.\nThe number was " << theNum <<". Feel free to play it again.\n\n"; 

    return 0;
}