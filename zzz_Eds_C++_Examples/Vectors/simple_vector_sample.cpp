// ****************************************************
// Vector example
// By Ed
// ****************************************************

//iostream used for inputting and outputting
#include <iostream>
// Include the vector library
#include <vector>

using namespace std;

/*
- Vectors are very similar to arrays and are used in the same fashion as Arrays.
- Vectors resize automatically.
*/

int main()
{
        // Create the vector
        // Format: vector<DataType> nameOfVector
        vector<int> myCoolVector;

        // Add some elements to the vectorf
        // theVectorName.push_back(value) ==> adds an element to the END of the vector and resizes vector.
        myCoolVector.push_back(3);
        myCoolVector.push_back(8);
        myCoolVector.push_back(4);
        myCoolVector.push_back(12);
        myCoolVector.push_back(9);

        // Print to screen all in the same line (don't use "<<endl")
        cout << "Vector: ";

        // NOTE: An "unsigned int" will always make sure that your int is possitive.
        // Use a loop to print vector to the screen:
        for (unsigned int i = 0; i < myCoolVector.size(); i++) //myCoolVector.size() ==> returns an unsigned int equal to the number of elements
        {
            // add a space between the elements
            cout << myCoolVector[i] << " ";
        }
    return 0;
}