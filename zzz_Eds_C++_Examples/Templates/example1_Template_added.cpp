// *************************************************************************************
// Template example
// By Ed
// *************************************************************************************

// A template is a simple and yet very powerful tool in C++.
// The compiler writes code for you based on a "Template", or rules, or blueprint, that you gave to it.

// A Template allows you to avoid code duplication. A Template allows you to define a function blueprint once,
// and then use that blueprint elsewhere.

#include <iostream>
#include <string>

// Create a Template:
template<typename T> // typename is usually T
void Print(T value)
{
    std::cout << value << std::endl; // print to the screen
}

int main()
{
    Print(5); // print an integer
    Print("Hello"); // print a string
    Print(5.5f); // print a float

    return 0;
}