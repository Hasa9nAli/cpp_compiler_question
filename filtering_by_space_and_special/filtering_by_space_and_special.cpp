#include<iostream>
#include <cstring>
using namespace std;

bool isSpecialCharacter(const char token) {
    char specialCharacter[27] = {
            '~', '`', '!', '@', '#', '$', '%', '^', '&', '*', '(',
            ')', '-', '+', '=', '|', ']', '[', '{', '}', '?', '/', ',',
            '<', '>', '_', ';'
    };
    for(char special: specialCharacter) {
        if (token == special)
            return true;
    }
    return false;
}

int main() {
    const string emptySpace = "";
    const char *const pathOfFile = "text.txt" ;
    string token,
            st[30],
            temp1 = "";
    FILE *FILE_TEXT; FILE_TEXT = ::fopen(pathOfFile, "r");
    char line[100];
    int index = 0;
    while (!feof(FILE_TEXT)) {
        fgets(line, 100, FILE_TEXT);
        for (int i = 0; i < strlen(line); i++) {
            if (line[i] != ' ' && !isSpecialCharacter(line[i]) && line[i] != '\n') {
                temp1 += line[i];
            }
            else if(isSpecialCharacter(line[i]) && line[i] != '\n'){
                st[index] = temp1;
                temp1 = emptySpace;
                index++;
                st[index] = line[i];
                index++;
            }
            else {
                if (temp1 != emptySpace && line[i] != '\n'){
                    st[index] = temp1;
                    temp1 = emptySpace;
                    index++;
                }
            }
        }
    }
    for(int i = 0 ; i < index; i++)
        cout<<st[i]<<endl;

    return 0;
}
