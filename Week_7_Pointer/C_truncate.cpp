#include <bits/stdc++.h>
using namespace std;

void truncate(char* s, int n){
    int len = 0;
    while (s[len]) ++len;
    if (len > n){
        s[n] = '\0';
    }
}

int main(){
char* s = new char [256];
    cin.getline(s, 256);
    int n; cin >> n;
    truncate(s, n);
    cout << s;
}
