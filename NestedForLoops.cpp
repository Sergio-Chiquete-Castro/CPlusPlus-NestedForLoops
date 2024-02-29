#include <iostream>
using namespace std;


int main() {



	for (int i = 0; i < 4; i++) { //rows

		for (int j = 0; j < 4; j++) {//columns

			if (i + j > 4 - 1) {
				cout << "*";
			}
			else {
				cout << "*";
			}

		}

		cout << endl;
	}

 


}


/*


In the first row (i = 0):

For j = 0, i + j = 0, so it prints a space.
For j = 1, i + j = 1, so it prints a space.
For j = 2, i + j = 2, so it prints a space.
For j = 3, i + j = 3, so it prints an asterisk *.
In the second row (i = 1):

For j = 0, i + j = 1, so it prints a space.
For j = 1, i + j = 2, so it prints a space.
For j = 2, i + j = 3, so it prints an asterisk *.
For j = 3, i + j = 4, so it prints an asterisk *.
In the third row (i = 2):

For j = 0, i + j = 2, so it prints a space.
For j = 1, i + j = 3, so it prints an asterisk *.
For j = 2, i + j = 4, so it prints an asterisk *.
For j = 3, i + j = 5, so it prints an asterisk *.
In the fourth row (i = 3):

For j = 0, i + j = 3, so it prints an asterisk *.
For j = 1, i + j = 4, so it prints an asterisk *.
For j = 2, i + j = 5, so it prints an asterisk *.
For j = 3, i + j = 6, so it prints an asterisk *.


*/
