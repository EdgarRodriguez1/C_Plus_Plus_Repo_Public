#include <iostream>
#include <fstream> //The fstream library allows us to work with files.
using namespace std;

/*
There are three objects included in the fstream library, which are used to create, write or read files:
    (1) ofstream = Creates and writes to files
    (2) ifstream = Reads from files
    (3) fstream	= A combination of ofstream and ifstream: creates, reads, and writes to files
*/

int main()
{
    // Declare a file reader using ifstream:
    ifstream inputFileA;

    // Open and read from the text file:
    inputFileA.open("read_a_file_txtTest.txt");

    // Create a text string, which is used to output to the console the text file
    string myText;

    /* Put the loop inside an "if statement" that contains a fail-safe, 
    for just in case the text file "read_a_file_txtTest.txt" doesn't exist */
    if (!inputFileA.fail())
    {
        // Use a while loop to read the file line by line
        while (inputFileA >> myText)
        {
            // Output the text from the file
            cout << myText << endl;
        }
    }
    // Close the file
    inputFileA.close();
}