#include <iostream>
using namespace std;

void showCurrentState(int numberOfState) {
  cout << "\nyou are in state " << numberOfState << endl;

}
void errorMessage(string TypeOfError) {
  cout << "Error Becase the input did not " << TypeOfError <<endl;
}
int main() {
  int state = 1;  
  const char HASH = '#'; 
  const char EXCLAMATION = '!'; 
  const char LESS_THAN = '<'; 
  const char DOLLAR = '$';  
const int EOS = -1; 
  char input; 
  int check = 1; 

  while (state < 4 && state > 0) {
    switch (state)
    {
      // start case 1 
    state1:case 1: {
      showCurrentState(1);
      cin >> input;
      if (input == HASH) {
        state = 1; 
        check++;
      }
      else if (check != 1 && input == DOLLAR ) {
        state = 2;
        // or goto state 2 
      }
      else {
        errorMessage("start with Hash or not exist the $ after the Hash");
        state = EOS;

      }

    };
    break;
    // end case 1 
    // start case 2 
  state2
  :case 2: {
    showCurrentState(2);
    cin >> input;
    if (isdigit(input))
      state = 3;

    else if (input == EXCLAMATION)
      // or goto state 1 
      state = 1;
    else {
      errorMessage("digit or Exclamation");
      state = EOS;
    }

  };
  break;
  // end state 2 
  // start case 3
state3:case 3:
  showCurrentState(3);
  cin >> input; 
  

  if (input == LESS_THAN)
  {
    state = 3;
  }
  else {
    errorMessage("achieve the last state continuty ");
    state = EOS;
  }
    }
  }
  system("pause");
}
