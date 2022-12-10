#include<iostream>
#include<string>
using namespace std; 
int main() {
	int state = 1; 
	char comment;
	const char slash = '/';
	const char star = '*';
	const int FOS = 6;
	Travers:while (state < 5 ) {
		switch (state) {
		case 1: {
			cin >> comment;
			if (comment == slash) {
				state = 2;
			}
			else {
				cout << "Error The First Slash is Not Exist  \n";
				state = FOS;
				return 0 ;
			}
		}; 
			   break; 
		case 2:
			cin >> comment;
			if (comment == star) {
				state = 3;
			}
			else {
				cout << "Error The First Star is Not Exist  \n";
				state = FOS;
			};
			break; 
		case 3 : 
			cin >> comment;
			if (comment == star) {
				state = 4;
			}
			else {
				state = 3;
			};
			break; 
		case 4: {
			cin >> comment;
			if (comment == slash) {
				state = 5;
			}
			else if (comment == star) {
				state = 4;
			}
			else
				state = 3;
		};
			  break; 
		}
		}
	if (state == 5)
		cout << "The Text is Comment";
	else
		cout << "The Text is No Comment";
}
