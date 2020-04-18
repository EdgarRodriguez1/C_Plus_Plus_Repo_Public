// Homework#2, Question #4
// By Edgar Rodriguez (NET ID: ear9621)

#include <iostream>
using namespace std;

int main()
{

	// Create some variables for the arithmetic calculations:
	int theAddition, theSubtraction, theMultiplication, theDiv, theMod, var3, var4;
	double var1, var2, theDivision;

	// Ask the user for input for the two positive integers:
		cout << "Please enter two positive integers, separated by a space: \n";
		cin >> var1 >> var2;

	// Perform the arithmetic calculations:
		theAddition = var1 + var2;
		theSubtraction = var1 - var2;
		theMultiplication = var1 * var2;
		theDivision = var1 / var2;
		theDiv = var1 / var2;
		var3 = var1; // assign the double type to an int
		var4 = var2; // assign the double type to an int
		theMod = var3 % var4;

	// Print to the screen the results:
		cout << var1 << " + " << var2 << " = " << theAddition << endl;
		cout << var1 << " - " << var2 << " = " << theSubtraction << endl;
		cout << var1 << " * " << var2 << " = " << theMultiplication << endl;
		cout << var1 << " / " << var2 << " = " << theDivision << endl;
		cout << var1 << " div " << var2 << " = " << theDiv << endl;
		cout << var3 << " mod " << var4 << " = " << theMod << endl;
	
	return 0;
}
