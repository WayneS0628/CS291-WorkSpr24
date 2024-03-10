#include <iostream>
#include <string>

using namespace std;

class TV{
    public:
        TV(string theBrand, int theSize, int theRefresh) : brand(theBrand), size(theSize), refreshRate(theRefresh) {}

        string brand;
        int size; // in inches
        int refreshRate; // in hertz
        
        void displayTV(){
            cout << "\n\nThis TV's made by " << brand << " and its size is " << size << " inches and its refresh rate is " << refreshRate << " HZ.\n\n";
        }
};

class Console{
    public:
        Console(string theBrand, string theColor, int thePrice) : brand(theBrand), color(theColor), price(thePrice) {}

        string brand;
        string color;
        int price; // in USD       
        void displayConsole(){
            cout << "\n\nThis consoles's made by " << brand << " and it's a " << color << " console which goes for $" << price << ".\n\n";
        }
};

int main(void){
    TV CU7000("Samsung", 55, 60);
    TV C3("LG", 40, 120);
    Console PS5("Playstation", "white", 499);
    Console XboxOne("Xbox", "black", 499);

    CU7000.displayTV();
    C3.displayTV();
    PS5.displayConsole();
    XboxOne.displayConsole();
}