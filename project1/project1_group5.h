#ifndef PROJECTONE  // Start of the preprocessor directive to prevent multiple inclusions
#define PROJECTONE

#include <iostream>  // Includes the I/O stream library for input/output operations
#include <string>    // Includes the string library, though it's not used in this class
using namespace std; // Using the standard namespace (it's usually better to avoid this in header files to prevent namespace pollution)

class FractionNumber{  // Declaration of the FractionNumber class

	private:
		int numerator;   // Private member variable for numerator
		int denominator; // Private member variable for denominator

	public:
		FractionNumber();                       // Default constructor declaration
		FractionNumber(int n, int d);          // Parameterized constructor declaration

		void displayFrac();                    // Method to display the fraction

		int isZero();                          // Method to check if the numerator is zero

		int isProper();                        // Method to check if the fraction is proper

		void properFrac();                     // Method to display the fraction in proper format

};

#endif // End of the preprocessor directive
