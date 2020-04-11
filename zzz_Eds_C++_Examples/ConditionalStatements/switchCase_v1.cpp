// ********************************************************************************
//Simple Switch Case Example (testing your age)
// By Ed
// ********************************************************************************

// What is a Switch statement?
// A Switch statement is a multi-way conditional statement.
// A Switch statement is just a bunch of 'if statements' put together.

//iostream used for inputting and outputting
#include <iostream>
using namespace std;

int main()
{
    
    // For example, create an int variable and assign the value of 21 (the legal drinking age).
    int age = 21;

    // Create a Switch statement that tests the value of 'age'
    switch (age)
    {
        case 16: //if (age == 16)
            cout << "Hey, you're 16! You can drive now! \n";
            break; // 'break' breakes out of the switch block

        case 18: //if (age == 18)
            cout << "Hey, you're 18! You can buy lotto tickets! \n";
            break; // 'break' breakes out of the switch block

        case 21: //if (age == 21)
            cout << "Hey, you're 21! You can buy beer now! \n";
            break; // 'break' breakes out of the switch block

        case 90: //if (age == 90)
            cout << "Hey, you're 90! You are very old! \n";
            break; // 'break' breakes out of the switch block

        default: // Show a default message if nothing matches. NOTE: The 'default' case is optional.
            cout << "This is the Default Case shown when 'age' doesn't equal any of the values in the switch cases \n";
            break; // 'break' breakes out of the switch block
    }
    cout << "End of program! \n"; // This last \n makes the program more portable/compatible.
    return 0; // This statement tells C++ that the program ends here.
}
