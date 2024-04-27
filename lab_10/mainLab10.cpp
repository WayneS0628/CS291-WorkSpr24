#include "lab10.h"


int main(){
	List car;

	car.push_back("Wayne");
	car.push_back("Carolyn");
	car.push_back("Ms.Charlyn");
	car.push_back("Erolyn");
	car.push_back("Drake");

	cout << "\nCurrent list: ";
	for(Iterator iter = car.begin(); !iter.equal(car.end()); iter.next()){
		cout << iter.get() << " -> ";
	}
	cout << "null\n\n";

	cout << "Enter a name to remove: ";
	string removeIt;
	getline(cin, removeIt);

    cout << "\n";

	if(car.remove(removeIt)){
		cout << removeIt << " removed from the list.\n";
	}else{
		cout << removeIt << " not found in the list.\n";
	}

	cout << "\nList after removal: ";

	car.display();

    cout << "Enter a name to add: ";
    string addIt;
    getline(cin, addIt);
    car.push_back(addIt);

    cout << "\nList after addition: ";

    car.display();

	return 0;

}