//Hello C String example
/* By Ed */
#include <iostream>
using namespace std;

//Main is always the first to run
int main()
{
	// This is a C String:
    const char* string = "Hello";

    // For Loop that iterates through the string and print each character out on a separate line
    for (int i = 0; i < 5; i++)
    {
        const char c = string[i];
        cout << c << endl;
    }
    
	return 0;
}
