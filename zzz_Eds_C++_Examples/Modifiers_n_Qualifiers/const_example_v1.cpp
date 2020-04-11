// *************************************************************************************
// Modifier keyword 'const' (aka constant) example
// By Ed
// *************************************************************************************

// What is a const keyword?
// The keyword 'const' can be used for variables and makes
// your variables constant so that they can't be modified.

// The word 'const' is often called a "modifier", because it modifies (restricts) 
// the variables being declared.

// Should the declared constant be in all UPPERCASE?
// Writing declared constants in all uppercase letters is not required by the C++
// language, but it is standard practice amond C++ programmers.

#include <iostream>
using namespace std;

int main ()
{
    // The constant value of PI
    const double PI = 3.14159;

    // Re-assigning a new value to PI will create an error because PI 
    //is a constant and can't be modified.
    
    // PI = 3.14;

    cout << PI << endl;

    return 0;
}