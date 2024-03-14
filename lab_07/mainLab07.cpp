#include "lab07.h"

int main(){
    Sneaker* NPG40 = new Sneaker("Nike Pegasus 40", 9, "Bronzine");
    Sneaker* AJ1 = new Sneaker();

    cout << endl;

    NPG40 -> whatSneak();
    AJ1 -> whatSneak();

    cout << endl;

    NPG40 -> setSize(9.5);

    cout << endl;

    NPG40 -> whatSneak();
    AJ1 -> whatSneak();

    delete NPG40;
    delete AJ1;

    return 0;
}