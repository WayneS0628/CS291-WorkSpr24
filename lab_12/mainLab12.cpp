#include "lab12.h"

int main(){

	Stack footballPlayers;
    cout << endl;
    try{
        footballPlayers.Push(0);
        footballPlayers.Push(100);
        footballPlayers.Push(72);
        footballPlayers.Push(27);
        footballPlayers.Push(58);

        for(;!footballPlayers.isEmpty(); footballPlayers.Pop()){
            cout << footballPlayers.Top() << endl;
        }
    }
    catch(const char* exceptionStack){
        cout << exceptionStack << endl;
    }

    cout << endl;

    return 0;
}