// Kirolos Dimian
// Lab 8
// 11/4/24

#include <iostream>
#include <cmath> // Header file for the math functions

using namespace std;

// Part 2
// Declaring the Function
int doubleMultiply (int a, int b)
{
    // Defining the function
    int product; // Creating variable product
    product = a * b * 2; // Storing a mathmatical equation with the variable products
    return product; // returns what is stored in products
}

// Part 3
// Declaring the function
double getSum (double a, double b, double c)
{
    // Defining the function
    double result; // Creating variable result
    result = a + b + c; // Storing a mathmatical equation with the variable result
    return result; // returns what is stored in result
}

//PART 1
int main ()
{
    cout << endl; // skipping a line for organization purposes
    cout << "PART 1" << endl; // labels this part one so there is no confusion
    cout << endl; // skipping a line for organization

    // Declaring Variables
    float user_input;

    //Asking the user to input a number
    cout << "Please input a number" << endl;
    cin >> user_input;
    
    // Declaring the mathmatic variable
    double square_Root = sqrt (user_input); // To find the square root of the inputted number
    double exponent = pow (user_input, 4); // To find the inputted number to the fourth power
    double the_Floor = floor (user_input); // To find the largest whole number that is not greater than the inputted number


    // Print statement for square root
    cout << "The Square root of " << user_input << " is " << square_Root << endl;

    // Print statement for the exponent
    cout << user_input << " to the fourth power is " << exponent << endl;

    // Print that statement for floor
    cout << "The largest whole number that is not greater than " << user_input << " is " << the_Floor << endl;

    // PART 2
    cout << endl; // skipping a line for organization
    cout << "PART 2" << endl; // labels this as part two to avoid confusion
    cout << endl; // skipping a line for organization

    // Declaring Variables
    int num1, num2;

    // Asking the user to input two numbers
    cout << "Enter two integers: " << endl;
    cin >> num1 >> num2;

    // To print twice the product of the numbers
    cout << "Twice the product of the numbers is: " 
    << doubleMultiply(num1, num2) << endl;

    // PART 3
    cout << endl; // skipping a line for organization
    cout << "PART 3" << endl; // labeling part three to avoid confusion
    cout << endl; // skipping a line for organization

    // Declaring Variables
    float numero1, numero2, numero3;

    // Asking the user to input 3 numbers
    cout << "Please enter 3 numbers: " << endl;
    cin >> numero1 >> numero2 >> numero3;

    // Doing the mathmatical sum using the function mentioned above int main ()
    double result = getSum (numero1, numero2, numero3);

    // Printing out the sum of the numbers
    cout << "The sum of the 3 numbers you put in is " << result << endl;
    
    return 0; // To exit the code
}

/* Output

PART 1

Please input a number
4
The Square root of 4 is 2
4 to the fourth power is 256
The largest whole number that is not greater than 4 is 4

PART 2

Enter two integers: 
3 7
Twice the product of the numbers is: 42

PART 3

Please enter 3 numbers: 
9 21 3
The sum of the 3 numbers you put in is 33
*/