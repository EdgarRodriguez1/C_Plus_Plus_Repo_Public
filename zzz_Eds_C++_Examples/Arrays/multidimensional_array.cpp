//Multidimensional Array example
// By Ed
//iostream used for inputting and outputting
#include <iostream>
using namespace std;

//Main is always the first to run
int main()
{
	// What is an array? An array is variable that stores multiple values.
    // What is a multidimensional array? It is an array inside another array.
    // Think of a multidimensional array as an Excel table, made up of rows and columns.

    // create a mutidimensional array with 2 rows and 3 columns (2*3=6 elements inside array).
    // Each array is a row and each value is a column:
    int myArray[2] [3] = {{2, 3, 4}, {8, 9, 10}};

    // Visually, the array looks like this (2 rows and 3 columns):
    // 2, 3, 4
    // 8, 9, 10

    // print out the array coodinates for element 4
    cout << "These are the coodinates for row [0] column [2]: " << myArray[0] [2] << endl;

    // print out the array coodinates for element 9
    cout << "These are the coodinates for row [1] column [1]: " << myArray[1] [1] << endl;

	return 0;
}
