#include<iostream>
using namespace std; 
int main() {
	/***************************************************************************/
	/*                THIS CODE WRITTEN BY HASAN ALI HASAN                     */
	/*             SOFTWRE ENGINEERING DEPARTMENT STAGE THREE                  */
	/*                       COMPILER [__IDENTIFEIRE__]                                                     */
	/***************************************************************************/
	int state = 1; 
	char letter; 
	cout << "enter your letter "; 
	cin >> letter; 
	if (isalpha(letter) || letter == '_') {
		state = 2;
		cin >> letter;
		while (state ==  2) {
			cin >> letter;
			// this is a condition to check if the input is letter or digit or _ 
			if (isalpha(letter) || isdigit(letter) || letter == '_') {
				state = 2;
			}
			else {
				state = 3;
				
			}
		}
		// check if the input is not (letter or digit or _ ) and state equal 3 
		if (!(isalpha(letter) || letter == '_' || isdigit(letter)) && state == 3) {
			state = 3;
			cout << "\error bacause " << letter << endl;
		}
		else
			cout << "\naccepted\n "; 
	}
	else
		cout << "error "; 



}