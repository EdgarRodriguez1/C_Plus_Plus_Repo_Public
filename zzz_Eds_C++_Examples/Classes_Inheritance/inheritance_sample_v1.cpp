// ****************************************************
// Inheritance of Classes example
// By Ed
// ****************************************************

#include <iostream>
using namespace std;

// *****************************************************************************************************
// What is Inheritance?

// Inheritance is the idea that you can "inherit" functionality (i.e. functions and variables) from another class.
// Similar to Templates, Inheritance helps you cut down on code duplication (and copying and pasting code 
// from one place to the next) by allowing you to "inherit" the code from one Class to another.

// *****************************************************************************************************
// Difference between the Base vs. Derived Class:

// The Base Class -- This is the main Class that has all the code that will be shared with 
// other sub-Classes.

// The Derived Class -- This is the Class that will "inherit" all the functionality from the main Base Class.

// *****************************************************************************************************

// Create/declare a Base Class
        class MotherBaseClass {
                public:
                    // function sample
                    void sayYourLastName(){
                        cout << "I am a Rodriguezzz!" <<endl;
                    }
        };

// Create a Derived Class that inherits the code from the Base Class
        class DaughterDerivedClass : public MotherBaseClass {
                public:
                    // I inherited my code from the Base Class!!!
        };

int main()
{
    // Base Class:

            //Create an Object using your MotherBaseClass Class
            MotherBaseClass edsAwesomeBaseObject;
            // cout
            cout << "The mother says:" << endl;
            // Access the sayYourLastName function inside your Class
            edsAwesomeBaseObject.sayYourLastName();

    // Derived Class:

            // Display to the screen the message that the Derived Class 'inherited' from the Base Class
            DaughterDerivedClass edsAwesomeDerivedObject;
            cout << endl << "The daughter says:" << endl;
            edsAwesomeDerivedObject.sayYourLastName();

    return 0;
}