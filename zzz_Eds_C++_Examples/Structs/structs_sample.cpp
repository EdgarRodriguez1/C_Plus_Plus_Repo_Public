// ****************************************************
// Structs (aka Structures) example
// By Ed
// ****************************************************

//iostream used for inputting and outputting
#include <iostream>
using namespace std;

// What is the difference between a Struct and a Class?

// Structs are almost the same as Classes!
// The main difference between a Struct and a Class is
// the visibility that C++ assigns by default.
// So, if you don't specify any kind of visibility modifier, by default,
// a Class makes everything private. However, for a Struct, the default 
// is public.

// The only reason why Structs even exist in C++ is because of the backwards
// compatibility that it wants to maintain with C.


// Classes allow you to group together all your crap (things 
// like related functions, variables, etc).
// For example, in a game, you can group all your functions
// for character movement in a Class.
// Classes can make your code a lot cleaner and easier for other
// humans to read, but Classes don't really add any new functionality.
// Anything that you can do with Classes you can also do without Classes!


// Create/declare a Struct
struct EdsFunStructure {

    // Access specifier (the visibility) can PUBLIC or PRIVATE.
    // PUBLIC -- Can be accessed by int main().
    // PRIVATE -- Can't be accessed by int main().
    
            // If no visibility is assigned, the default is PUBLIC!
            // function sample:
            void coolSaying(){
                cout << "That's right! Don't leave for tomorrow what you can do today!" <<endl;
            }
};

int main()
{
    // Variables that are made from Struct types are called Objects.
    //Create an Object using your Struct
    EdsFunStructure edsAwesomeObject;
    // Access the coolSaying function inside your Struct
    edsAwesomeObject.coolSaying();

    return 0;
}