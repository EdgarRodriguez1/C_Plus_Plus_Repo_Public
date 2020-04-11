//Switch case example rolling the dice
/* By Ed */

// What is a Switch statement?
// A Switch statement is a multi-way conditional statement.

//iostream used for inputting and outputting
#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main()
{

    int dice = 0;

    //seed the random number generator
    srand(time(0));

    dice = (rand() % 6) + 1;
    cout << "You rolled a " << dice << endl;
    
    // Create the Switch statement
    switch (dice)
    {
    case 1: //if (dice == 1)
        cout << "One \n";
        break;
    case 2: //if (dice == 2)
        cout << "Two \n";
        break;
    case 3: //if (dice == 3)
        cout << "Three \n";
        break;
    case 4: //if (dice == 4)
        cout << "Four \n";
        break;
    case 5: //if (dice == 5)
        cout << "Five \n";
        break;
    case 6: //if (dice == 6)
        cout << "Six \n";
        break;
    default: //if nothing matches
        cout << "Invalid \n";
        break;
    }

    return 0;
}
