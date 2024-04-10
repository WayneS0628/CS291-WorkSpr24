#include "project1_group5.h"  // Include the FractionNumber class definition

int main() {

    int n, d;  // Variables to store the numerator and denominator

    cout << "Welcome To My Fraction Judging System\n\n";

    cout << "Enter a non-negative integer numerator: ";
    // Input validation loop for the numerator
    while (!(cin >> n) || n < 0) {
        cout << "ERROR! Please enter a non-negative integer numerator: ";
        cin.clear();  // Clear error flag on cin
        cin.ignore(numeric_limits<streamsize>::max(), '\n');  // Ignore incorrect input until the end of line
    }

    cout << "Enter a positive integer denominator: ";
    // Input validation loop for the denominator
    while (!(cin >> d) || d < 1) {
        cout << "ERROR! Please enter a positive integer denominator: ";
        cin.clear();  // Clear error flag on cin
        cin.ignore(numeric_limits<streamsize>::max(), '\n');  // Ignore incorrect input until the end of line
    }

    // Dynamically create a FractionNumber object with user-provided values
    FractionNumber* UserFrac = new FractionNumber(n, d);

    cout << "\n\nThe fraction you entered is: ";
    UserFrac->displayFrac();  // Display the fraction entered by the user

    cout << "\n";

    // Check if the fraction is zero and display the message accordingly
    if (UserFrac->isZero()) {
        cout << "The fraction number is zero.\n\n";
    } else {
        cout << "The fraction number is not zero.\n";
        // Check if the fraction is proper and display the message accordingly
        if (UserFrac->isProper()) {
            cout << "The fraction number is proper\n\n";
        } else {
            cout << "The fraction number is not proper.\n";
            UserFrac->properFrac();  // Display the proper fraction format
            cout << "\n\n";
        }
    }

    delete UserFrac;  // Free the memory allocated for UserFrac

    return 0;
}
