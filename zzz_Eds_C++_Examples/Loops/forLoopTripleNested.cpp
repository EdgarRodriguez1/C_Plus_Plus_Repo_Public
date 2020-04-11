//Hello World ForLoop example
/* By Ed */
//iostream used for inputting and outputting
#include <iostream>
using namespace std;

//Main is always the first to run
int main()
{
	for (int h = 0; h < 24; h++){
            for (int m = 0; m < 60; m++){
                for (int s = 0; s < 60; s++){
                    cout << "Hour" << h << "Minute" << m << "Second" << s << endl;
                }
            }
    }    
	return 0;
}
