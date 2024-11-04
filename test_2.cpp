#include <iostream>
using namespace std;
double square(double x); // Function declaration

int main() {
    double number = 5.0;
    double result = square(number); // Function call
    cout << "The square of " << number << " is " << result << endl;
    return 0;
}

// Function definition
double square(double x) {
    return x * x;
}

