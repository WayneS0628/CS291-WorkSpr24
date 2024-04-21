#include "lab08.h"

int main (void){
    Soldier* soldier_array = new Soldier[5];
    soldier_array[0] = Soldier("John", 210, 6.0);
    soldier_array[1] = Soldier("Chris", 250, 6.5);

    cout << "\n\n";

    for (int i = 0; i < 5; i++){
        soldier_array[i].info();
    }

    cout << "\n\n";

    cout << "The average weight of all the soldiers is " << Avg(soldier_array, 5) << " lbs!!";

    cout << "\n\n";

    return 0;
}