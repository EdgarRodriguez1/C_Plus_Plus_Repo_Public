// Happy Birthday to demonstrate functions
// by Ed
#include <iostream>
using namespace std;
 
// You will often see C++ programs that have function declaration above main(), 
// and function definition below main(). This will make the code better organized and easier to read.

// NOTE: The function can be added before the main 'int main()',
// or after the main, or in a separate file.

//function prototype
void PrintHBD();

int main()
{
    // To call a function, write the function's name followed by two parentheses () and a semicolon ;
    PrintHBD(); // Call the function
    PrintHBD(); // Call the function
    cout << "Happy Birthday dear user" << endl;
    PrintHBD(); // Call the function

    return 0;
}

// Function header
void PrintHBD()
{
    cout << "Happy Birthday to you" << endl; // the body of the function (definition)
}
