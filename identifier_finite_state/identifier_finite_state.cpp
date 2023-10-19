#include <iostream>
using namespace std;

bool isLetter(char character){
        if((!(character >= 'A' && character <= 'Z')) && (character >= 'a' && character <='z'))
            return true ;
        return false;
    }
bool isDigit(char character){
    if( character >= '0' && character <= '9')
        return true ;
    return false;
}

int main() {
    char character;
    const int FIRST_STATE = 1 ;
    const int SECOND_STATE = 2;
    const int THIRD_STATE = 3;
    int state = FIRST_STATE;
    cout<< "Enter Your Character";
    cin>> character;
    if(isLetter((character))) {
        cin >> character;
        state = SECOND_STATE;

        while (isLetter(character) || isDigit(character)) {
            cin >> character;
            state = SECOND_STATE;
            if(character == '~'){
                state = 3;
                break;
            }
        }

        if (state == THIRD_STATE) {
            cout << "ACCEPTED";
        } else
            cout << "ERROR CASE";
    }
    else cout<< "Error Not Found Letter in start " ;
    return 0;
}
