/***********************************************************************************************************/
/*                       THIS CODE WRITTEN BY HASAN ALI HASAN                                               */
/*                     GDSC MOSUL LEADER AND FRONT-END DEVELPER                                             */
/*                             CONTACT WITH ME          
/*-----------------------------ihasanalihasan@gmail.com-----------------------------------------------------*/
/*-----------------------------linkedin -> ihasanalihasan-----------------------------------------------------*/
/***********************************************************************************************************/
#include<iostream>
using namespace std; 
void _error_message(string type_error , char letter= NULL) {
	cout << "Error Becase " << type_error<<" " << letter << endl;
}
void main() {
	char letter; 
	int state = 1; 
	while (state == 1 || state == 2) {
		switch (state) {
		case 1: {
			cin >> letter;
			if (isalpha(letter) || letter == '_')
				state = 2;
			else {
				_error_message("Not start with letter or _ but start with ", letter);
				state = 999;
			}
		};
			  break; 
		case 2: {
			cin >> letter; 
			if (isalpha(letter) || isdigit(letter) || letter == '_')
				state = 2;
			else
				state = 3; 
		}
		}
	}
	if (state == 3)
		_error_message("there is error in name of identifier " , letter ); 
}
