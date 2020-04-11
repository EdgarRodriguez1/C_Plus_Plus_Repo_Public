// *************************************************************************************
// static variables example
// By Ed
// *************************************************************************************

// What is a static keyword?
// By default, a variable defined within a block has a lifetime for the duration of the block.
// Static variables live for the duration of the program. 
// Static variables are stored globally, even if they are stored in a class. 
// By default a variable defined outside of any block is static.

#include <iostream>
using namespace std;

// A function with a static int:
int func() {
    static int x = 7; // The static keyword holds the running value of 'x' for the entire duration of the program!
    return x++;
}

int main ()
{

    int i = func();
    cout << "The integer is: " << i << endl;
    i = func();
    cout << "The integer is: " << i << endl;
    i = func();
    cout << "The integer is: " << i << endl;
    return 0;
}