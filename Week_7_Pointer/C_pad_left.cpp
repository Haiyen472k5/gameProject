#include <bits/stdc++.h>
using namespace std;

void pad_left(char* s, int n){
    int len = 0;
    while (s[len] != '\0') ++len;
    if (len < n){
        int sub = n - len;
        for (int i = n-1; i >= sub; i--){
            s[i] = s[i-sub];
        }
        for (int i = 0; i < sub; i++){
            s[i] = '_';
        }
        s[n] = '\0';
    }
}
int main(){
    char* s = new char [256];
    cin.getline(s, 256);
    int n; cin >> n;
    pad_left(s, n);
    cout << s;

}
