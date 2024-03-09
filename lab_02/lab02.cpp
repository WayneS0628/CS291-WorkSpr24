#include <iostream> 
#include <cstdlib>
#include <ctime>
using namespace std;

int main(void){

    srand(static_cast<unsigned int>(time(NULL)));

    int random = 1 + (rand() % 100);

    cout << random << endl;
    
    return 0;
}