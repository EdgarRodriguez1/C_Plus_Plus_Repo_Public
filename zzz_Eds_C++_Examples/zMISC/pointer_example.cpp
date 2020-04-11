#include <iostream>
using namespace std;

int main()
{
    int x = 7;
    int y = 42;
    // The star "*" indicates a pointer
    int *myPointer = &x; // The "&" indicates that myPointer is pointing "by reference" to x
    
    // print all initial values to the screen:
    cout << "These are the initial values:" << endl;
    cout << " The value of x is: " << x << endl;
    cout << " The value of y is: " << y << endl;
    cout << " The value of *myPointer is: " << *myPointer << endl << endl;

    cout << "Changing the value of the pointer variable '*myPointer' to 69 will change the real value of 'x' " << endl;
    *myPointer = 69;

    // Print new values to the screen:
    cout << " The value of x is: " << x << endl;
    cout << " The value of y is: " << y << endl;
    cout << " The value of *myPointer is: " << *myPointer << endl;

    return 0;
}
