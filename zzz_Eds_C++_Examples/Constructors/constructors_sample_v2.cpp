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

    MyRectangle myObject(2, 6); // Passing two numbers to the Constructor
    return 0;
}