#include <iostream>
#include <cstring>
using namespace std;

char* trim_left(const char* s, int n);
int main(){
    char* s = new char [256];
    cin.getline(s, 256);
    int n = 6;
    char* str = trim_left(s, 6);
    cout << str;
    delete[] str;
    return 0;
}

char* trim_left(const char* s, int n){
    int len = strlen(s);
    int sub = 0;
    while(s[sub] == ' ') sub++;  
    int len_str = len - sub;;
    char* str = new char [len_str+1];
    for (int i = 0; i < len_str; i++){
        str[i] = s[i+sub];
    }
    str[len_str] = '\0';
    return str;
}
