// ********************************************************************************
// Switch case example
// By Ed
// ********************************************************************************

// What is a Switch statement?
// A Switch statement is a multi-way conditional statement.

#include <iostream> //iostream used for inputting and outputting
using namespace std;

int main()
{
    // Set some variables to test against 'x'
    const int iONE = 1;
    const int iTWO = 2;
    const int iTHREE = 3;
    const int iFOUR = 4;
    
    // Assign a value to 'x'
    int x = 3;

    // Create a Switch statement that tests the value of 'x'
    switch (x)
    {
        case iONE: //if (x == 1)
            cout << "The value of 'x' is one \n";
            break; // 'break' breakes out of the switch block

        case iTWO: //if (x == 2)
            cout << "The value of 'x' is two \n";
            break; // 'break' breakes out of the switch block

        case iTHREE: //if (x == 3)
            cout << "The value of 'x' is three \n";
            break; // 'break' breakes out of the switch block

        case iFOUR: //if (x == 4)
            cout << "The value of 'x' is four \n";
            break; // 'break' breakes out of the switch block

        default: // Show a default message if nothing matches. NOTE: The 'default' case is optional.
            cout << "This is the Default Case shown when 'x' doesn't equal any of the values from 1 to 4 \n";
            break; // 'break' breakes out of the switch block
    }
    cout << "End of program! \n"; // This last \n makes the program more portable/compatible.
    
    return 0; // This statement tells C++ that the program ends here.
}
