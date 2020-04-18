// ****************************************************
// Example of the type Char
// By Ed
// ****************************************************

// Character Types:

// The char data type is used to store a single character.
// The character must be surrounded by single quotes, like 'A' or 'c'.

#include <iostream>
using namespace std;

int main (){

    // Char data type
    char myCoolChar = '+'; // The char is placed inside single quotes

    // Print to the screen
    cout << "The char's value is: " << myCoolChar << endl;

    // Print out the ASCII table value:
    // Cast the char as an int to get the char's ASCII value:
    cout << "The ASCII value of '" << myCoolChar << "' is " << (int) myCoolChar << endl;

    // You can also use ASCII values to display certain characters:
    cout << "\nYou can also use ASCII values to display certain characters: \n";

    char var1 = 88, var2 = 89, var3 = 90;
    cout << "The char ASCII value " << (int) var1 << " prints out: " << var1 << endl;
    cout << "The char ASCII value " << (int) var2 << " prints out: " << var2 << endl;
    cout << "The char ASCII value " << (int) var3 << " prints out: " << var3 << endl;

    return 0;
}