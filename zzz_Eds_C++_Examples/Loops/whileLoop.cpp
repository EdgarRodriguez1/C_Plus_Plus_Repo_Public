// ***************************************************************
// whileLoop (Hello World example)
// By Ed
// ***************************************************************

#include <iostream> // iostream used for inputting and outputting
using namespace std;

// NOTE: The While Loop tests the condition of the loop first, and then tests the body.

//Main is always the first to run
int main()
{
    
    int x = 0;

    // the while loop:
    while (x < 5){
        cout << "Hello, world!!! " << x << endl;
        x++;
    }

	return 0;
}
