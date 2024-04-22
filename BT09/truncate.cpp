#include <iostream>
#include <cstring>
using namespace std;

char* truncate(const char* s, int n);
int main(){
    char* s = new char [256];
    cin.getline(s, 256);
    int n = 6;
    char* str = truncate(s, 6);
    cout << str;
    delete[] str;
    return 0;
}

char* truncate(const char* s, int n){
    int len = strlen(s);
    char* str = new char [n+1];
    if (len <= n) {
        for (int i =  0; i < len; i++){
            str[i] = s[i];
        }
        str[len] = '\0';
        return str;
    }

    for (int i = 0; i < n; i++){
        str[i] = s[i];
    }
    str[n] = '\0';
    return str;
}