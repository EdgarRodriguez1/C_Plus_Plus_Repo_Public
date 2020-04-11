//Add an element to an empty array
// By Ed
//iostream used for inputting and outputting
#include <iostream>

int main()
{

    // create an empty (without any elements) array with a size of 7
    int myArray[7];

    // add an element to the array, index #0
    myArray[0] = 10;

    // print out the array value index #0
    std::cout << "index #0 has the value of: " << myArray[0] << std::endl;

	return 0;
}
