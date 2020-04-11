//Print the array values using a "for loop"
/* By Ed */
//iostream used for inputting and outputting
#include <iostream>

int main()
{

    // create an array with 5 elements
    int myArray[] = {12, 43, 23, 45, 125};

    // compute array size
    int myAwesomeArraySize = sizeof(myArray) / sizeof(myArray[0]);

    // print out the array size
    std::cout << "The array size is: " << myAwesomeArraySize << std::endl;

    // print message
    std::cout << "The array values are:" << std::endl;

    // use a "for loop" to print out all element values of the array    
    for(int x = 0; x < myAwesomeArraySize; x++){

        std::cout << myArray[x] << std::endl;

    }
    
	return 0;
}
