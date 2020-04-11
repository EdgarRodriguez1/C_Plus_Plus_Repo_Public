//Function with a return value
//by Ed

#include <iostream>
using namespace std;

int addition(int a, int b)
{
    int r;
    r = a + b;
    return r;
}

int main()
{
    int x, y, z;
    cout << "Enter a whole number: " << endl;
    cin >> x;
    cout << "Enter another whole number: " << endl;
    cin >> y;
    z = addition(x, y);
    cout << "The addition result is: " << z;

    return 0;
}