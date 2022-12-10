#include <iostream>
using namespace std; 
void show_message(int numberOfState) {
	cout << "now you are in state " << numberOfState << endl;
}
void _error_message(string type_error) {
	cout << "Error Becase" << type_error<<endl; 
}
void main() {
	int state = 1; 
	char caracter; 
	const int EOS = -1;
	bool detectorSpical = false ;
	// start the scanneing 
	cin >> caracter; 
    // check if the character is 1 or 0 then continue to enter the value 
	if (caracter == '1' || caracter == '0') {
		while (state < 4 && state > 0) {
			if (state == 1) {
				show_message(1);
				cin >> caracter;
				if (caracter == '1' || caracter == '0')
					state = 1;
				// the condition of specal caracter go to state 2 
				else if (!(isdigit(caracter)) && !(isalpha(caracter)))
					state = 2; 
				// the condition of b go to state 3
				else if (caracter == 'b') {
					state = 3;
				}
				else {
					//error message and exit from loop
					_error_message(" Not enter special character or b ");
					state = EOS;

				}
			}
			if (state == 2) {
				show_message(2);
				cin >> caracter;
				// go to state 2 
				if (caracter == '8' || caracter == '9') {
					state = 2;
				}
				// go to state 3 
				else if (caracter == 'd' ) {
					state = 3;
				}
				else {
					//error message and exit from loop 
					_error_message(" 8 or 9 or d  ");
					state = EOS;
				}
			}
			
			if (state == 3) {
				show_message(3);
				cin >> caracter;
				// go to state 1 
				if (caracter == 'a' ) {
					state = 1;
				}
				// go to state  2 
				else if (caracter == 'c')
					state = 2;
			
				else {
					//error message and exit from loop 
					_error_message(" not enter the c or a ");
					state = EOS;
				}
			}
		}
	}
	else {
		_error_message("Not Start with 1 or 0 ");
	}
	system("pause");
	}
