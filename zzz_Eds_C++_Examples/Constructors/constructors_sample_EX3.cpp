// **************************************************************************************
// Constructor with parameters example -- (Finding the area of a rectangle 
// using Constructors and Classes)
// By Ed
// **************************************************************************************

#include <iostream>
using namespace std;

class MyRectangle { // The class

    private: // Access specifier
        float area;

    public: // Access specifier
        MyRectangle(float width, float length){ // Constructor with parameters
            
            area = width * length;
            cout << "The area of the rectangle is: " << area << "\n";
        }

};

int main(){

    float wid, len;
    cout << "Enter the width of the rectangle: "; 
    cin >> wid;
    cout << "Enter the length of the rectangle: ";
    cin >> len;
    MyRectangle myObject(wid, len); // Passing two values to the Constructor
    return 0;
}