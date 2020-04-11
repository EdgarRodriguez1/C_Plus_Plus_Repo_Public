// Increment operator
/* By Ed */
//iostream used for inputting and outputting
#include <iostream>
using namespace std;

//Main is always the first to run
int main()
{
    int someVariable = 10;
    
    /*
    *********************************************
    // Add one to someVariable can be writen like this:
    someVariable = someVariable +1;
    *********************************************
    */

    // Or a much neater and quicker is using ++:
    someVariable ++;

    // Display to the screen
    cout << someVariable << endl;
    // someVariable now equals 11

	return 0;
}