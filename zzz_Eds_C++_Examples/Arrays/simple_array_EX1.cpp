//Array example
// By Ed

#include <iostream> //iostream used for inputting and outputting
using namespace std;

//Main is always the first to run
int main()
{
	// What is an array? 
    // An array is variable that stores multiple values.

    // create an array with 5 elements:
    int myArray[5] = {2, 4, 6, 8, 10};

    // print out the array values
    cout << "These are the array index values: \n";
    cout << myArray[0] << endl;
    cout << myArray[1] << endl;
    cout << myArray[2] << endl;
    cout << myArray[3] << endl;
    cout << myArray[4] << endl;

	return 0;
}
