#include <bits/stdc++.h>
using namespace std;

void trim_left(char* s){
    int len = 0;
    while (s[len]) len++;
    int sub = 0;
    while (s[sub] == ' ') sub++;
    for (int i = 0; i < len - sub; i++){
        s[i] = s[i+sub];
    }
    s[len-sub] = '\0';
}
int main(){
    char* s = new char [256];
    cin.getline(s, 256);
    trim_left(s);
    cout << s;
}
