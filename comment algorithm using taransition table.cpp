#include <iostream>
using namespace std; 
int main() {
	char transitionTable[6][5]{
		{'#','/' , '*' , 'o', 'a'},
		{'1' , '2' ,'0', '0', 'n'},
		{'2' , '0' , '3', '0' , 'n'},
		{'3' , '3', '4', '3' , 'n'},
		{'4' , '5' , '4', '3' , 'n'},
		{'5' , '0', '0','0', 'y'}
	};
	for (int i = 0; i < 6; i++) {
		for (int j = 0;j < 5; j++)
			cout << transitionTable[i][j]<< "   ";
		cout << endl; 
	}
	 


	system("pause"); 
}
