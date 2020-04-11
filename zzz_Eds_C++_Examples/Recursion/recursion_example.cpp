// ****************************************************
// Recursion example (Calculating factorials using a recursive function)
// Example of 5 factorial is: 5! = 5*4*3*2*1 = 120
// By Ed
// ****************************************************

#include <iostream>
using namespace std;

// What is Recursion?
// Recursion is the idea that a function can call itself.
// A recursive function calls itself inside its own body.

// In a recursive function, what is a "Base Case"?
// A Base Case is an ending point for your function.
// A Base Case can help prevent endless loops in your functions.

// This is an example of a Recursive function to find factorials:
int myFactorialFinderFunction (int x) {
    
    if (x == 1) {
        return 1; // Recursive function's Base Case
    } else {
        return x*myFactorialFinderFunction(x-1); // The function calls itself and decrements by 1
    }

}

int main (){   

    // Call the function and pass the value 5 to find the 5! factorial
    cout << "5 factorial is equal to: " << myFactorialFinderFunction(5) << endl;
    return 0;

}