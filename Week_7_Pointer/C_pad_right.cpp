#include <bits/stdc++.h>
using namespace std;
void pad_right(char* s, int n){
    int len = 0;
    while (s[len] != '\0') ++len;
    if (len < n){
        for (int i = len; i < n; i++){
            s[i] = '_';
        }
        s[n] = '\0';
    }
}

int main(){
    char* s = new char [256];
    cin.getline(s, 256);
    int n; cin >> n;
    pad_right(s, n);
    cout << s;
}
