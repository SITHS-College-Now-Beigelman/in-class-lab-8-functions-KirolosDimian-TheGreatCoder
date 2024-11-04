#include <iostream>  // Include for input and output operations
#include <cmath>      // Include for mathematical functions //FOR MATH // FOR NUMBERS
#include <cctype>     // Include for character handling functions //FOR A CHAR
#include <iomanip>    // Include for manipulators used to format output

using namespace std; // Makes all the names in the std namespace available

int main() {
    int num; // Variable to store an integer
    double firstNum, secondNum; // Variables to store decimal numbers
    char ch = 'T'; // Character variable initialized with 'T'

    // Set cout to output fixed point notation and show decimal point
    cout << fixed << showpoint << setprecision(2) << endl;

    // Check if 'T' is a lowercase letter
    cout << "Line 12: Is " << ch << " a lowercase letter? " << islower(ch) << endl;

    // Convert lowercase 'a' to uppercase
    cout << "Line 13: Uppercase a is " << static_cast<char>(toupper('a')) << endl;

    // Calculate and output 4.5 raised to the power of 6.0
    cout << "Line 14: 4.5 to the power 6.0 = " << pow(4.5, 6.0) << endl;

    // Prompt user to enter two decimal numbers
    cout << "Line 15: Enter two decimal numbers: ";
    cin >> firstNum >> secondNum; // Read two decimal numbers
    cout << endl;

    // Output the result of firstNum raised to the power of secondNum
    cout << "Line 18: " << firstNum << " to the power of " << secondNum << " = " << pow(firstNum, secondNum) << endl;

    // Output 5.0 raised to the power of 4
    cout << "Line 19: 5.0 to the power of 4 = " << pow(5.0, 4) << endl;

    // Add 3.5 raised to the power of 7.2 to firstNum
    firstNum = firstNum + pow(3.5, 7.2);
    cout << "Line 21: firstNum = " << firstNum << endl;

    // Store -32 in num and output its absolute value
    num = -32;
    cout << "Line 23: Absolute value of " << num << " = " << abs(num) << endl;

    // Output the square root of 28.00
    cout << "Line 24: Square root of 28.00 = " << sqrt(28.00) << endl;

    return 0; // Return 0 to signal successful completion
}


