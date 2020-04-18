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
    char myCoolChar = 'a'; // The char is placed inside single quotes

    // Print to the screen
    cout << "The char's value is: " << myCoolChar << endl;

    // Print out the ASCII table value:
    // Cast the char as an int to get the char's ASCII value:
    cout << "The ASCII value of '" << myCoolChar << "' is " << (int) myCoolChar << endl;

    // You can also use ASCII values to display certain characters:
    cout << "\nYou can also use ASCII values to display certain characters: \n";

    char var1 = 65, var2 = 66, var3 = 67;
    cout << "The char ASCII value 65 prints out: " << var1 << endl;
    cout << "The char ASCII value 66 prints out: " << var2 << endl;
    cout << "The char ASCII value 67 prints out: " << var3 << endl;

    return 0;
}