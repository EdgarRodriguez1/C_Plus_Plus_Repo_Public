//Hello World Do_While Loop example
/* By Ed */
//iostream used for inputting and outputting
#include <iostream>
using namespace std;

//Main is always the first to run
int main()
{
    // The Do_While Loop tests the body of the loop first, and then tests the condition:
    int x = 0;
    do {
        cout << "Hello, world!!!" << x << endl;
        x++;
    } while (x < 5);
	return 0;
}
