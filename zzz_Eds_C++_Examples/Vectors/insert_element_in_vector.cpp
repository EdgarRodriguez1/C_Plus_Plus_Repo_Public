// ****************************************************
// Vector example (inserting an element at the BEGINNING of the vector)
// By Ed
// ****************************************************

//iostream used for inputting and outputting
#include <iostream>
// Include the vector library
#include <vector>

using namespace std;

// myCoolVector.insert(myCoolVector.begin() + integer, new value) ==> adds element BEFORE specified index number

int main()
{
    // Create the vector
    vector<int> myCoolVector;

    // Add some elements to the vector
    myCoolVector.push_back(3);
    myCoolVector.push_back(88);
    myCoolVector.push_back(45);
    myCoolVector.push_back(12);
    myCoolVector.push_back(9);

    // Print to screen all elements in the same line BEFORE inserting a new element 
            cout << "Before inserting the new element #777: ";

            // Use a loop to print vector to the screen:
            for (unsigned int i = 0; i < myCoolVector.size(); i++)
            {
                // add a space between the elements
                cout << myCoolVector[i] << " ";
            }
    // go down one line
    cout <<endl;

    // Insert an element in the beginning of the vector
    myCoolVector.insert(myCoolVector.begin(), 777);

            cout << "After inserting the new #777 element: " << endl;
                for (unsigned int i = 0; i < myCoolVector.size(); i++) //myCoolVector.size() ==> returns an unsigned int equal to the number of elements
            {
                // add a space between the elements
                cout << myCoolVector[i] << " ";
            }
    return 0;
}