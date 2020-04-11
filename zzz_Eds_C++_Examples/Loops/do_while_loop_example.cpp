//Do_While Loop password example
/* By Ed */
//iostream used for inputting and outputting
#include <iostream>
#include <string> // Don't forget to include the 'string' library to use the 'string' data type
using namespace std;

//Main is always the first to run
int main()
{
    // The Do_While Loop tests the body of the loop first, and then tests the condition.
    // From the beginning, if the condition is false, the loop will execute at least one time.
    string correctPassword = "1234";
    string userPassword;
    do {
        cout << "Enter your password: " << endl;
        cin >> userPassword;
    } while (userPassword != correctPassword);
	return 0;
}
