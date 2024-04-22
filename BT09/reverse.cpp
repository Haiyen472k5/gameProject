#include <iostream>
#include <cstring>
using namespace std;
char* reverse(const char* s);
int main(){
    char* s = new char [256];
    cin.getline(s, 256);
    char* str = reverse(s);
    cout << str;
    delete [] s;
    return 0;
}

char* reverse(const char* s){
    int len = 0;
    while (s[len] != '\0') len++;
    char* str = new char [len+1];
    for (int i = len - 1; i>= 0; i--){
        str[len -1 -i] = s[i];
    }
    str[len] = '\0';
    return str;
}
