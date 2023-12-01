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
    string token;
    FILE *FILE_TEXT;
    FILE_TEXT = ::fopen("text.txt", "r");
    string temp2;
    string temp1;
    temp1 = temp2 = "";
    char line[100];
    string st[30];
    int index = 0;
    while (!feof(FILE_TEXT)) {
        fgets(line, 100, FILE_TEXT);
        for (int i = 0; i < strlen(line); i++) {
            if (line[i] != ' ' && !isSpecialCharacter(line[i]) && line[i] != '\n') {
                temp1 += line[i];
            }
            else if(isSpecialCharacter(line[i]) && line[i] != '\n'){
                st[index] = temp1;
                temp1 = "";
                index++;
               st[index] = line[i];
                index++;
            }
            else {
                if (temp1 != "" && line[i] != '\n'){
                    st[index] = temp1;
                    temp1 = "";
                    index++;
                }
            }
        }
    }
    for(int i = 0 ; i < index; i++)
        cout<<st[i]<<endl;

    return 0;
}
