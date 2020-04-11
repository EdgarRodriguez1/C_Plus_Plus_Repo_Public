//Empty array example using "std::", instead of "using namespace std;"
/* By Ed */
//iostream used for inputting and outputting
#include <iostream>
// using namespace std;

int main()
{

    // add 6 elements to the empty array:
    int myArray[] = {10, 20, 30, 25, 15, 98};

    // Before updating, print out the array value index #2
    std::cout << "before assigning a new value to index #2: " << myArray[2] << std::endl;
    
    // assign a new value to index #2
    myArray[2] = 999;

    // After updating, print out the array value index #2
    std::cout << "after assigning a new value to index #2: " << myArray[2] << std::endl;

	return 0;
}
