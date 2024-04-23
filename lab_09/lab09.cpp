#include <iostream>
#include <string>
#include <list>
using namespace std;

int main(void) {
    // Print a newline at the start of the output.
    cout << "\n";

    // Initialize a list of strings with five names.
    list<string> names = {"Freddy", "Larry", "Tiger", "Paul", "Fiona"};

    // Iterate over the list and print each name followed by two spaces.
    for (list<string>::iterator pos = names.begin(); pos != names.end(); pos++) {
        cout << *pos << "  ";
    }

    // Print two newlines for better separation of output.
    cout << "\n\n";

    // Sort the list of names in alphabetical order.
    names.sort();

    // Iterate over the sorted list and print each name on a new line.
    for (list<string>::iterator pos = names.begin(); pos != names.end(); pos++) {
        cout << *pos << "\n";
    }

    // Print two newlines for formatting before program ends.
    cout << "\n\n";

    // Return 0 to indicate successful program termination.
    return 0;
}
