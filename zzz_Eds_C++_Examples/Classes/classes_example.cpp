// ****************************************************
// Classes example
// By Ed
// ****************************************************

//iostream used for inputting and outputting
#include <iostream>
using namespace std;

/*
Classes allow you to group together all your crap (things 
like related functions, variables, etc).
For example, in a game, you can group all your functions
for character movement in a Class.

Classes can make your code a lot cleaner and easier for other
humans to read, but Classes don't really add any new functionality.
Anything that you can do with Classes you can also do without Classes!
*/

// Create/declare a Class
class EdsFunClass {

    // Access specifier (the visibility) can PUBLIC or PRIVATE.
    // PUBLIC -- Can be accessed by int main().
    // PRIVATE -- Can't be accessed by int main(). By default, a Class makes everything private.

        public:
            // function sample
            void coolSaying(){
                cout << "Don't leave for tomorrow what you can do today!!!" <<endl;
            }

};

int main()
{

    // Variables that are made from Class types are called Objects.
    //Create an Object using your Class
    EdsFunClass edsAwesomeObject;
    // Access the coolSaying function inside your Class
    edsAwesomeObject.coolSaying();

    return 0;

}