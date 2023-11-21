#include <iostream>
using namespace std;
int main()
{
	const char END_CASE = 'E';
	// define state & newState & the input character
	int state = 1, newState; char character;
	// declare transition table 
	char taransition_table[6][5] = {
			{'#','/','*','O','A'},
			{ 1 , 2 , 0 , 0 ,'A'},
			{ 2 , 0 , 3 , 0 ,'A'},
			{ 3 , 3 , 4 , 3 ,'A'},
			{ 4 , 5 , 4 , 3 ,'A'},
			{ 5 , 0 , 0 , 0 ,END_CASE}
	};
	cout << "ch:";
	while (taransition_table[state][4] != END_CASE && state != 0) {
		 cin >> character;
		 // check the state one 
		if (character == '/') {
			newState = taransition_table[state][1];
		}
		else if (character == '*') {
			newState = taransition_table[state][2];
		}
		else {
			newState = taransition_table[state][3];
		}

		if (state == 5)
			break;
		else 
		state = newState;
	}// End While
	if (state == 5)
		cout << "Accept..";
	else
		cout << "No Accept..";
}
