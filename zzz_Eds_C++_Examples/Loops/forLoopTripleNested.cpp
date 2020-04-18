// ***********************************************************
// Triple-nested ForLoop (24-hour clock example)
// By Ed
// ***********************************************************

#include <iostream> // iostream used for inputting and outputting
using namespace std;

// Main is always the first to run
int main()
{
    // the triple-nested for_loop:
	for (int h = 0; h < 24; h++){
            for (int m = 0; m < 60; m++){
                for (int s = 0; s < 60; s++){
                    cout << "Hour " << h << " Minute " << m << " Second " << s << endl; // Print to the screen
                }
            }
    }    
	return 0;
}
