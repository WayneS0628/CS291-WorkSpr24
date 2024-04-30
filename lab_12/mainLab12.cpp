#include "lab12.h"

int main(){

	Stack army;
    cout << endl;
    try{
        army.Push("Wolf");
        army.Push("Tiger");
        army.Push("Lion");

        for(;!army.isEmpty(); army.Pop()){
            cout << army.Top() << endl;
        }
    }
    catch(const char* exceptionStack){
        cout << exceptionStack << endl;
    }

    cout << endl;

    return 0;
}