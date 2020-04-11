//24-hour clock nested ForLoop example
/* By Ed */
//iostream used for inputting and outputting
#include <iostream>
using namespace std;

//Main is always the first to run
int main()
{
	for (int h = 0; h < 24; h++){
            for (int m = 0; m < 60; m++){
                cout << "Hour" << h << "Minute" << m << endl;
            }
    }    
	return 0;
}
