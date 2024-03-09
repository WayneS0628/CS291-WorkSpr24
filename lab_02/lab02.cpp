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
    int attempt = 0;

    cout << endl << "Welcome to guess my number!" << endl;
    cout << endl << "I have a number in my head from 1 - 100" << endl;

    while (attempt < 10){
        if (guess != theNum){
            cout << "Enter a guess: ";
        }
    }



    return 0;
}