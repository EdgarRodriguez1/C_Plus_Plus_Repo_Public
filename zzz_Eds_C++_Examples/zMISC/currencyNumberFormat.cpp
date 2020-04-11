//Currency Number Format
/* By Ed */

#include <iostream>
#include <cstdlib>

// Header providing parametric manipulators: (setprecision) for number format
#include <iomanip>

using namespace std;

// CONSTANT is outside the main function
const float TAX_RATE = .04;

int main()
{
	//declare variables
	string name;
	float price = 4.50;
	int qty = 3; 
	float charge = 0, taxCharge = 0;
		
	//format output
	cout.setf(ios::fixed);
	cout.setf(ios::showpoint);
	
	//calculations
	charge = price * qty;
	taxCharge = charge * TAX_RATE;
	charge = charge + taxCharge;
			
	//formated output
	cout << " $ " << setprecision(2) << charge << endl;

	return 0;
}
