//Empty array example using "std::", instead of "using namespace std;"
/* By Ed */
//iostream used for inputting and outputting
#include <iostream>
// using namespace std;

int main()
{
	// What is an array? An array is variable that stores multiple values.

    // add 6 elements to the empty array:
    int myArray[] = {10, 20, 30, 25, 15, 98};

    // print out the array values
    std::cout << myArray[0] << std::endl;
    std::cout << myArray[1] << std::endl;
    std::cout << myArray[2] << std::endl;
    std::cout << myArray[3] << std::endl;
    std::cout << myArray[4] << std::endl;
    std::cout << myArray[5] << std::endl;

	return 0;
}
