//String sample
/* By Ed */
//iostream used for inputting and outputting
#include <iostream>
using namespace std;

//Main is always the first to run
int main()
{
	// Create some string variables
	string name;
	string favFood;
	
	cout << "Please enter your name: " << endl; // Display a message to the screen
	cin >> name; // Take in some input
	cout <<  "Hello, " << name << ", nice to see you. What is your favorite food? \n"; // Display a message to the screen from the inputted response
	cin >> favFood; // Take in some input
	cout << "Great! " << favFood <<" is one of my favorites too!\n"; // Display a message to the screen from the inputted response
	return 0;
}
