// ******************************************************************
// Do_While Loop (password example)
// By Ed
// ******************************************************************

#include <iostream> // iostream used for inputting and outputting
#include <string> // Don't forget to include the 'string' library to use the 'string' data type
using namespace std;

//Main is always the first to run
int main()
{
    // The Do_While loop tests the body of the loop first, and then tests the condition.
    // From the beginning, if the condition is false, the loop will execute at least one time.

    // set some string variables
    string correctPassword = "1234";
    string userPassword;

    // The Do_While loop:
    do {
        cout << "Enter the correct password: " << endl;
        cin >> userPassword;
    } while (userPassword != correctPassword);

    // display message to the screen to tell user the password entered was correct
    cout << "The password you entered was correct!!! \n";
	
    return 0;
}
