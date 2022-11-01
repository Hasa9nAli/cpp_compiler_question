#include <iostream>
using namespace std;
void _show_current_state(int numberOfState) {
	cout << "\nyou are in state " << numberOfState << endl;

}
void _ERORR_MESSAGE(string TypeOfError) {
	cout << "Error Becase the input did not " << TypeOfError <<endl;
}
int main() {
	int state = 1;  
	const char HASH = '#'; 
	const char EXCLAMATION = '!'; 
	const char LESS_THAN = '<'; 
	const int EOS = -1; 
	char input; 
	int check = 1; 

	while (state < 4 && state > 0) {
		switch (state)
		{
			// start case 1 
		state1:case 1: {
			_show_current_state(1);
			cin >> input;
			if (input == HASH) {
				state = 1; 
				check++;
			}
			else if (check != 1 && input == '$') {
				state = 2;
				// or goto state 2 
			}
			else {
				_ERORR_MESSAGE("start with Hash");
				state = EOS;

			}

		};
		break;
		// end case 1 
		// start case 2 
	state2:case 2: {
		_show_current_state(2);
		cin >> input;
		if (isdigit(input))
			state = 3;

		else if (input == EXCLAMATION)
			// or goto state 1 
			state = 1;
		else {
			_ERORR_MESSAGE("digit or Exclamation");
			state = EOS;
		}

	};
	break;
	// end state 2 
	// start case 3
state3:case 3:
	_show_current_state(3);
	cin >> input; 
	

	if (input == LESS_THAN)
	{
		state = 3;
	}
	else {
		_ERORR_MESSAGE("achieve the last state continuty ");
		state = EOS;
	}
		}
	}
	system("pause");
}