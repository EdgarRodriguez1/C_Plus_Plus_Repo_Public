//Hello World whileLoop example
/* By Ed */
//iostream used for inputting and outputting
#include <iostream>
using namespace std;

//Main is always the first to run
int main()
{
    // The While Loop tests the condition of the loop first, and then tests the body:
    int x = 0;
    while (x < 5){
        cout << "Hello, world!!!" << x << endl;
        x++;
    }
	return 0;
}
