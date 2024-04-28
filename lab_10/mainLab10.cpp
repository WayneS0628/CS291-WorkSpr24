#include "lab10.h"

int main(){
    List car;

    // Adding initial names to the list
    car.push_back("Wayne");
    car.push_back("Carolyn");
    car.push_back("Ms.Charlyn");
    car.push_back("Erolyn");
    car.push_back("Drake");

    // Display the current list
    cout << "\nCurrent list: ";
    for(Iterator iter = car.begin(); !iter.equal(car.end()); iter.next()){
        cout << iter.get() << " -> ";
    }
    cout << "null\n\n";

    // Remove a name from the list
    cout << "Enter a name to remove: ";
    string removeIt;
    getline(cin, removeIt);
    cout << "\n";
    if(car.remove(removeIt)){
        cout << removeIt << " removed from the list.\n";
    }else{
        cout << removeIt << " not found in the list.\n";
    }

    // Display list after removal
    cout << "\nList after removal: ";
    car.display();

    // Add a new name to the list
    cout << "Enter a name to add: ";
    string addIt;
    getline(cin, addIt);
    car.push_back(addIt);

    // Display list after adding a new name
    cout << "\nList after addition: ";
    car.display();

    return 0;
}
