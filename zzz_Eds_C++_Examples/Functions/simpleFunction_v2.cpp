// Simple function
// by Ed
#include <iostream>
using namespace std;
/* 
NOTE: The function can be added before the main 'int main()',
    or after the main, or in a separate file.
*/

// Create (often referred to as declare) a function:
void myFunction()
{
    cout << "I just got executed!"; // the body of the function (definition)
}

int main()
{
    myFunction(); // call the function
    return 0;
}

// Outputs "I just got executed!"