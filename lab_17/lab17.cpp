#include <iostream>

using namespace std;

// Function to swap two elements using references
void Swap(double& num1, double& num2) {
    double temp;  // Temporary storage for the swap
    temp = num1;  // Save the first number in temp
    num1 = num2;  // Set first number to second number
    num2 = temp;  // Set second number to the value stored in temp
}

// Function to find the index of the maximum element in a subarray
int MaxIndex(double values[], int startIndex, int endIndex) {
    int indexOfMax = startIndex; // Start with the first index as the max
    // Iterate over each element in the subarray
    for (int i = startIndex + 1; i < endIndex; i++)
        // If current element is greater than the current max, update indexOfMax
        if (values[i] > values[indexOfMax])
            indexOfMax = i;
    // Return the index of the maximum element
    return indexOfMax;
}

// Function to perform selection sort on an array of doubles
void SelectionSort(double values[], int numValues) {
    int endIndex = numValues - 1; // Define the last index to consider in the sort
    // Iterate over the array from the first element to the second last element
    for (int current = 0; current < endIndex; current++) {
        // Find the index of the maximum element in the unsorted section
        int maxIndex = MaxIndex(values, current, numValues);
        // If the maximum element is not already in place, swap it
        if (maxIndex != current)
            Swap(values[current], values[maxIndex]);
    }
}

// Main function to demonstrate the selection sort
int main() {
    double a[7] = { 19.99, 69.99, 59.99, 0, 20, -1, 39.99 }; // Example array

    int s = 7; // Number of elements in the array

    SelectionSort(a, s); // Sort the array

    // Print the sorted array
    for (auto& i : a)
        cout << i << endl;

    return 0;
}
