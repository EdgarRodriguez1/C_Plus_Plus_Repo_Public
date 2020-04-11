//Find the largest of the three integers
/* By Ed */
//iostream used for inputting and outputting
#include <iostream>
using namespace std;

//Main is always the first to run
int main()
{
	int x, y, z;

    do {

        // Get input values from user for x, y, and z:
            cout << "Enter an integer: " << endl;
            cin >> x;

            cout << "Enter another integer that is different from " << x << ": " << endl;
            cin >> y;

            cout << "Enter another integer that is different from " << x << " and " << y << ": " << endl;
            cin >> z;
            
        // Test the conditions to see which integer is the largest:
            if ((x > y) && (x > z) && (y != z)){

                cout << "From the three integers you entered, " << x << " is the largest!" << endl;

            } else if ((y > x) && (y > z) && (x != z)) {

                cout << "From the three integers you entered, " << y << " is the largest!" << endl;
        
            } else if ((z > x) && (z > y) && (x != y)) {

                cout << "From the three integers you entered, " << z << " is the largest!" << endl;

            } else if ((x == y) || (x == z) || (y == z)) {

                cout << "Make sure the three integers you entered are different!!! Please try again!!!" << endl;

            } else {
                // nothing                
            }

    } while ((x == y) || (x == z) || (y == z));

	return 0;

}
