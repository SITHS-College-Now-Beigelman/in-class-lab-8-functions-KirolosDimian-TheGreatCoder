// Kirolos Dimian
// Lab 8
// 11/4/24

#include <iostream>
#include <cmath>

using namespace std;

//PART 1
int main ()
{

    cout << endl;
    cout << "PART 1" << endl;
    cout << endl;
    // Declaring Variables
    float user_input;

    //Asking the user to input a number
    cout << "Please input a number" << endl;
    cin >> user_input;
    
    // Declaring the mathmatic variable
    double square_Root = sqrt (user_input);
    double exponent = pow (user_input, 4);
    double the_Floor = floor (user_input);


    // Print statement for square root
    cout << "The Square root of " << user_input << " is " << square_Root << endl;

    // Print statement for the exponent
    cout << user_input << " to the fourth power is " << exponent << endl;

    // Print that statement for floor
    cout << "The largest whole number that is not greater than " << user_input << " is " << the_Floor << endl;

    // PART 2
    cout << endl;
    cout << "PART 2" << endl;
    cout << endl;

    int num1, num2;
    cout << "Enter two integers: " << endl;

    
    return 0;
}


// Part 2

int doubleMultiply (int a, int b)
{
    int product;
    product = a * b * 2;
    return product;
}
