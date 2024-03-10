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
            cout << "This TV's made by " << brand << " and its size is " << size << " and its refresh rate is " << refreshRate << ".\n\n";
        }
};

class Console{
    public:
        Console(string theBrand, string theColor, int thePrice) : brand(theBrand), color(theColor), price(thePrice) {}

        string brand;
        string color;
        int price; // in USD       
        void displayConsole(){
            cout << "This consoles's made by " << brand << " and it's a " << color << " console which goes for " << price << ".\n\n";
        }
};

