#include <iostream>
using namespace std;
int main()
{
	const char EndCasee = 'E';
	// define state & newState & the input character
	int state = 1, newstate; char character;
	// declare transition table 
	char taransition_table[6][5] = {
			{'#','/','*','O','A'},
			{ 1 , 2 , 0 , 0 ,'A'},
			{ 2 , 0 , 3 , 0 ,'A'},
			{ 3 , 3 , 4 , 3 ,'A'},
			{ 4 , 5 , 4 , 3 ,'A'},
			{ 5 , 0 , 0 , 0 ,EndCasee}
	};
	cout << "ch:";
	while (taransition_table[state][4] != EndCasee && state != 0) {
		 cin >> character;
		 // check the state one 
		if (character == '/') {
			newstate = taransition_table[state][1];
		}
		else if (character == '*') {
			newstate = taransition_table[state][2];
		}
		else {
			newstate = taransition_table[state][3];
		}

		if (state == 5)
			break;
		else 
		state = newstate;
	}// End While
	if (state == 5)
		cout << "Accept..";
	else
		cout << "No Accept..";
}
