#include <iostream>
#include <cstring>
using namespace std;

char* deleteCh(const char* s, char ch);

int main(){
    char* s = new char [256];
    cin.getline(s, 256);
    char ch = 'a';
    char* str = deleteCh(s, ch);
    cout << str;
    delete [] str;
    return 0;
}

char* deleteCh(const char* s, char ch){
    int len = 0;
    ///tinh do dai cua mang khi ko co phan tu ch;
    for (int i = 0; s[i] != '\0'; i++){
        if (s[i] != ch) len++;
    }

    char* str = new char [len+1];
    int index = 0;
    for (int i = 0; s[i] != '\0'; i++){
        if (s[i] != ch) str[index++] = s[i];
    }
    str[index] = '\0';
    return str;
}