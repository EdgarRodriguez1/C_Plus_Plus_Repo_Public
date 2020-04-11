// ****************************************************
// Example of the Class 'string'
// By Ed
// ****************************************************

#include <iostream>
#include <string> // Don't forget to include the 'string' library to use the 'string' data type
using namespace std; // The 'string' library also needs the standard namespace

// 'string' is a Class.

// C++ lacks a native data type for strings. For this reason, you must include the
// 'string" library.

int main(){

    // Declaration and assignment for the string variables:
    string allDays, day1 = "Monday ", day2 = "Tuesday ", day3 = "Wednesday "; // Notice the double quotes for the strings.
    allDays = day1 + day2 + day3;

    // Print to the screen:
    cout << allDays << endl;

    return 0;
}