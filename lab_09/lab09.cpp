#include <iostream>
#include <string>
#include <list>
using namespace std;

int main(void) {
	cout<< "\n";
	list<string> names = {"Freddy", "Larry", "Tiger", "Paul", "Fiona"};
	for(list<string>::iterator pos = names.begin(); pos != names.end(); pos++){
        cout << *pos << "  ";
    }
	cout << "\n\n";
	names.sort();
	for(list<string>::iterator pos = names.begin(); pos != names.end(); pos++){
        cout << *pos << "\n";
    }
	cout << "\n\n";
	return 0;
}