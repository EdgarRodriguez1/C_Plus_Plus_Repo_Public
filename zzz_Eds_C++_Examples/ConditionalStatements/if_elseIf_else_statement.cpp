//If-elseIf-else statement example
/* By Ed */
//iostream used for inputting and outputting
#include <iostream>
using namespace std;

//Main is always the first to run
int main()
{
	int x = 8;

    if (x == 6){

        // the double equal ""=="" is the operator for equality
        cout << "x is equal to 6" << endl;

    } else if (x == 7) {

        cout << "x is equal to 7" << endl;
 
    } else if (x == 8) {

        cout << "x is equal to 8" << endl;

    }
    
    else {

        cout << "I don't know the value of 'x'!!!" << endl;

    }
        
	return 0;

}
