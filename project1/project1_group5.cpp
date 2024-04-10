#include "project1_group5.h"  // Includes the header file for the FractionNumber class

FractionNumber::FractionNumber(): numerator(1), denominator(1) {}  // Default constructor implementation

FractionNumber::FractionNumber(int n, int d): numerator(n), denominator(d) {}  // Parameterized constructor implementation

void FractionNumber::displayFrac(){  
    cout << numerator << "/" << denominator;  // Method to print the fraction as a string
}

int FractionNumber::isZero(){
    if(numerator == 0){
        return 1;  // Returns 1 if the numerator is zero (true)
    }else{
        return 0;  // Returns 0 otherwise (false)
    }
}

int FractionNumber::isProper(){
    if(numerator < denominator){
        return 1;  // Returns 1 if the fraction is proper (true)
    }else {
        return 0;  // Returns 0 otherwise (false)
    }
}

void FractionNumber::properFrac(){
    cout << "The proper format of this fraction number is " << numerator / denominator 
         << " and " << numerator % denominator << "/" << denominator;  // Method to display the fraction in a proper format
}
