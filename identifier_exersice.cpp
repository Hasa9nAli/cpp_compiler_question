#include<iostream>
#include<string>
#include<string.h>
using namespace std; 
int main() {
	
	string identifier;
	
	char erorrCase[] = {
	'0','1','2','3','4','5','6','7','8','9'
		, '\\' , '!','@','#','$','%','^','&','(',')'
		, '+', '-', '*','/' ,'=','.', '>', '<', '?', '"' ,'"',':',';',',', ' ','~','`', '{','}'
	};
	// to check the first char and save it if there exsist error 
	char saveTheFirstCharNotValid = ' ';
	// to chtch the another erorr like spical character
	string anotherErrorChar = ""; 
	// this guy to detect Erorr
	bool erorrDector = false;
	cout << "enter your identifire : "; 
	cin >> identifier;
	// travers element by element 
	for (int i = 0; i < identifier.length(); i++) {
		for (int j = 0; j < strlen(erorrCase); j++) {
			if (identifier[0] == erorrCase[j]) {
				saveTheFirstCharNotValid = erorrCase[j];
				erorrDector = true; 
			}
		}
		if (isalnum(identifier[i]))
				continue;

		else if (!isalpha(identifier[i]) && !isdigit(identifier[i]) && identifier[i] != '_')
			{
				erorrDector = true;
				anotherErrorChar += identifier[i];
			}
	}
	// examination stage
	if (erorrDector) {
		cout << "Detect the Error \n";
	}
	else
		cout << "Not Exist any Erorr The identifier is correct\n"; 
	if (saveTheFirstCharNotValid != ' ' ) {
		cout << "the identifire is not valid becase start with ->" << saveTheFirstCharNotValid << endl;
	}
	if (anotherErrorChar != "") {
		cout << "there is  spical character -> " << anotherErrorChar<<endl; 
	}
	system("pause"); 
	return 0; 
}
