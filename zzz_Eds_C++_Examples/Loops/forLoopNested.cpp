// **********************************************************
// 24-hour clock nested ForLoop example
// By Ed
// **********************************************************

#include <iostream> // iostream used for inputting and outputting
using namespace std;

// Main is always the first to run
int main()
{
    // the nested for_loops:
	for (int h = 0; h < 24; h++){
            for (int m = 0; m < 60; m++){
                cout << "Hour " << h << " Minute " << m << endl; // display to the screen
            }
    }    
	
    return 0;
}
