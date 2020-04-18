// ************************************************************
// Simple Do_While Loop (Hello World example)
// By Ed
// ************************************************************

#include <iostream> //iostream used for inputting and outputting
using namespace std;

// NOTE: The Do_While Loop tests the body of the loop first, and then tests the condition.

//Main is always the first to run
int main()
{    
    int x = 0;

    // the Do_While loop:
    do {
        cout << "Hello, world!!! " << x << endl;
        x++;
    } while (x < 5);
	
    return 0;
}
