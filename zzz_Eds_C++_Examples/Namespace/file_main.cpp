#include <iostream>
#include "file_one.cpp" // external file link
#include "file_two.cpp" // external file link

// Use the standard C++ namespace
// using namespace std;

int main (){

    // To prevent name conflicts, use the appropriate namespace for the "display()" function calls".
    one::display();
    two::display();

    return 0;

}