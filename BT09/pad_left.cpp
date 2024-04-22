#include <iostream>
#include <cstring>
using namespace std;
char* pad_left(const char* s, int n);

int main(){
    char* s = new char [256];
    cin.getline(s, 256);
    int n = 6;
    char* str = pad_left(s, 6);
    cout << str;
    delete [] str;
    return 0;
}

char* pad_left(const char* s, int n){
    int len = strlen(s);
    char* str = new char [n+1];
    if (len >= n){
        for (int i = 0; i < len; i++){
            str[i] = s[i];
        }
        str[len] = '\0';
        return str;
    }

    int sub = n - len;
    for (int i = 0; i < sub; i++){
        str[i] = '_';
    }
    for (int i = sub; i < n; i++){
        str[i] = s[i-sub];
    }
    str[n] = '\0';
    return str;
}