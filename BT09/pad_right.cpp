#include <iostream>
#include <cstring>
using namespace std;
char* pad_right(const char* s, int n);

int main(){
    char* str = new char [256];
    cin.getline(str, 256);
    int n = 5;
    char* s = pad_right(str, n);
    cout << s;
    delete [] s;
    return 0;

}

char* pad_right(const char* s, int n){
    int len = strlen(s);
    char* str = new char [n+1];
    if (len >= n){
        for (int i = 0; i < len; i++){
            str[i] = s[i];
        }
        str[len] = '\0';
        return str;
    }

    for (int i = 0; i < len; i++){
        str[i] = s[i];
    }
    for (int i = len ; i < n; i++){
        str[i] = '_';
    }
    str[n] = '\0';
    return str;
}