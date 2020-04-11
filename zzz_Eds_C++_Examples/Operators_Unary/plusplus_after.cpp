// ****************************************************
// Example of the unary operator ++ after the variable
// By Ed
// ****************************************************

#include <iostream>
using namespace std;

int main (){

    int number = 2;
    int value_produced = 2 * (number++); // This statement produces the output 4, not 6
    cout << value_produced << endl;
    cout << number << endl;

    return 0;
}