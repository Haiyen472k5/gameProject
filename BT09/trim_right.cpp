#include <iostream>
#include <cstring>
using namespace std;

char* trim_right(const char* s, int n);
int main(){
    char* s = new char [256];
    cin.getline(s, 256);
    int n = 6;
    char* str = trim_right(s, 6);
    cout << str;
    delete[] str;
    return 0;
}

char* trim_right(const char* s, int n){
    int len = strlen(s);
    while (s[len-1] == ' ') len--;
    char* str = new char [len+1];
    for (int i = 0; i < len; i++){
        str[i] = s[i];
    }
    str[len] = '\0';
    return str;
}

