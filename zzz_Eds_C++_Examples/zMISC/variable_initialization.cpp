// *********************************************************
// Initialization of variables
// Source: http://www.cplusplus.com/doc/tutorial/variables/
// *********************************************************

// int x;
// When the variables in the example above are declared, they have an undetermined 
// value until they are assigned a value for the first time.

// ********************************************************************************************

// In C++, there are three ways to initialize variables (assign a value to variables). 
// They are all equivalent and are reminiscent of the evolution of the language over the years.

// 1)
// The first one, known as c-like initialization (because it is inherited from the C language), 
// consists of appending an equal sign followed by the value to which the variable is initialized:
    // For example:
        // type identifier = initial_value;
        // int x = 0;

// 2)
// A second method, known as constructor initialization (introduced by the C++ language), 
// encloses the initial value between parentheses (()):
    // For example:
        // type identifier (initial_value);
        // int x (0);

// 3)
// Finally, a third method, known as uniform initialization, similar to the above, 
// but using curly braces ({}) instead of parentheses (this was introduced by the revision 
// of the C++ standard, in 2011):
    // For example:
        // type identifier {initial_value};
        // int x {0};

// ********************************************************************************************

#include <iostream>
using namespace std;

int main ()
{
  // Initialization (assigning a value) of variables:
  int a=5;               // initial value: 5
  int b(3);              // initial value: 3
  int c{2};              // initial value: 2
  int result;            // initial value undetermined

  a = a + b; // 5+3 = 8
  result = a - c; // 8-2 = 6
  cout << result; // result is equal to 6

  return 0;
}