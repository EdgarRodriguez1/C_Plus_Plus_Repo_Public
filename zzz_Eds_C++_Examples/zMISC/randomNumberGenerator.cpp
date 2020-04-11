//Some popular Reference Libraries for C++
/* By Ed */

//iostream used for inputting and outputting
#include <iostream>

/* This header file contains definitions of 
functions to get and manipulate date and time information. */
//http://www.cplusplus.com/reference/ctime/
#include <ctime>

/*  This header defines several general purpose functions, 
including dynamic memory management, random number generation, 
communication with the environment, integer arithmetics, searching, 
sorting and converting.
*/
//http://www.cplusplus.com/reference/cstdlib/
#include <cstdlib>

using namespace std;

//Main is always the first to run
int main()
{
	int myRandomNumber = 0;
    
    //Initialize the seed for the random number generator
    srand(time(0));

    /*Generate a random rumber between 1 and 100 */
    myRandomNumber = (rand() % 100) + 1;    
    cout << "Your random number is: " << myRandomNumber << endl;
    
	return 0;
}