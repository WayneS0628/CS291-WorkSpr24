#include "lab07.h"

int main(){
    Sneaker* NPG40 = new Sneaker("Nike Pegasus 40", 9, "Bronzine");// Create a new Sneaker object on the heap for Nike Pegasus 40, size 9, color Bronzine
    Sneaker* AJ1 = new Sneaker(); // Create a new default Sneaker object on the heap

    cout << endl;

    // Print details of both sneakers
    NPG40 -> whatSneak();
    AJ1 -> whatSneak();

    cout << endl;

    // Change the size of the Nike Pegasus 40 to 9.5
    NPG40 -> setSize(9.5);

    cout << endl;

    // Print details again to see the updated size for Nike Pegasus 40
    NPG40 -> whatSneak();
    AJ1 -> whatSneak();

    // Clean up: delete dynamically allocated Sneaker objects to prevent memory leaks
    delete NPG40;
    delete AJ1;

    return 0;
}