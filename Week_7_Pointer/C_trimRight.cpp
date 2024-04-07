#include <bits/stdc++.h>
using namespace std;

void trim_right(char* s){
    int len = 0;
    while (s[len]) len++;
    int sub = len - 1;
    while (s[sub] == ' ') sub--;
    s[sub+1] = '\0';
}
int main(){
    char* s = new char [256];
    cin.getline(s, 256);
    trim_right(s);
    cout << s;
}

