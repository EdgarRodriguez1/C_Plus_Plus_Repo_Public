// *************************************************************************************
// This file is a good candidate for a Template because the code is being duplicated in the 3 functions,
// and the 3 functions are very similar.
// *************************************************************************************

// A template is a simple and yet very powerful tool in C++.
// The compiler writes code for you based on a "Template", or rules, or blueprint, that you gave to it. 

#include <iostream>
#include <string>

// create a function for printing integers
void Print(int value)
{
    std::cout << value << std::endl;
}

// create a function for printing strings
void Print(std::string value)
{
    std::cout << value << std::endl;
}

// create a function for printing a float
void Print(float value)
{
    std::cout << value << std::endl;
}

int main()
{
    Print(5); // print an integer
    Print("Hello"); // print a string
    Print(5.5f); // print a float

    return 0;
}