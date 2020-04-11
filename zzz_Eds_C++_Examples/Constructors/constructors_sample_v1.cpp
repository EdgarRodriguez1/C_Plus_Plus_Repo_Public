// ****************************************************
// Constructors
// By Ed
// ****************************************************

// What is a Constructor?

// SOURCE: (https://www.w3schools.com/cpp/cpp_constructors.asp) A constructor in C++ 
// is a special method that is automatically called when an object of a class is created.

// SOURCE: (thenewboston YouTube) A Constructor is a function that gets called automatically as soon as you
// create an object, as opposed to having to create an object and use that object to
// call functions from our Class.

// As soon as we create an object, the Class will call the Constructor function.

// We don't need to explicitly create an object that calls the Constructor function. The Constructor will
// be called automatically.

// NOTE: Constructors don't have a Return Type (i.e. int, void, string)

// The Constructor's name is always the same as the Class name.

#include <iostream>

using namespace std;

// Create a Constructor:
// To create a constructor, use the same name as the Class, followed by parentheses ()

class MyCoolClass {     // The class
  public:           // Access specifier
    MyCoolClass() {     // Constructor
      cout << "Hello, World!";
    }
};

int main() {
  MyCoolClass myObj;    // Create an object of MyCoolClass (this will call the constructor)
  return 0;
}