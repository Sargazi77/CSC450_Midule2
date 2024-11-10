//============================================================================
// Name        : String_Concatenation.cpp
// Author      : MS
// Version     : 1.0
// Description : Program to concatenate two strings input by the user
//============================================================================

#include <iostream>  // Include library for input and output
#include <string>    // Include library for using the string data type

using namespace std;

int main() {
    // Variable declarations for user input
    string firstString, secondString, result;

    // Loop to repeat the process 3 times
    for (int i = 1; i <= 3; i++) {
        // Prompt the user to enter the first string
        cout << "Enter the first string (Attempt " << i << "): ";
        getline(cin, firstString); // Get the entire line to allow spaces in the input

        // Prompt the user to enter the second string
        cout << "Enter the second string (Attempt " << i << "): ";
        getline(cin, secondString); // Get the entire line for the second input

        // Concatenate the two strings with a space in between
        result = firstString + " " + secondString;

        // Print the concatenated result
        cout << "Concatenated Result: " << result << endl << endl;
    }

    return 0; // End of the program
}
