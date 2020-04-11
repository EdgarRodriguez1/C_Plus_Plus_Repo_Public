// *************************************************************************************
// Function Overloading example
// By Ed
// *************************************************************************************

// What is function overloading?
// Function overloading allows you to give two or more different definitions to the
// same function name. You can reuse the same function name.

#include <iostream>
using namespace std;

// THESE FUNCTIONS ARE OVERLOADED (they're using the same function name):

    // Create a function that takes in an integer
    void printNumber(int x){
        cout << "I am printing an integer: " << x << endl;
    }

    // Use the same function name for the float type
    void printNumber(float x){
        cout << "Now I am printing a float: " << x << endl;
    }

int main ()
{
    int a = 54;
    float b = 32.56;

    // Call the function 'printNumber' and pass in the variable with the integer
    printNumber(a);

    // Call the same function 'printNumber' but pass in the variable with the float
    printNumber(b);

    return 0;
}