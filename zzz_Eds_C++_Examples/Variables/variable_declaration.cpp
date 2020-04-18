// *********************************************************
// Declaration of variables
// Source: http://www.cplusplus.com/doc/tutorial/variables/
// *********************************************************

// C++ is a 'strongly-typed' language, and requires every variable to be declared 
// with its type before its first use. This informs the compiler the size to 
// reserve in memory for the variable and how to interpret its value. 

// The syntax to declare a new variable in C++ is straightforward: 
// we simply write the type followed by the variable name (i.e., its identifier). 

// For example:
    // int a;
    // float mynumber;

#include <iostream>
using namespace std;

int main ()
{
  // DECLARING variables:
  int a, b;
  int result;

  // process:
  a = 5;
  b = 2;
  result = a - b;

  // print out the result:
  cout << result;

  // terminate the program:
  return 0;
}