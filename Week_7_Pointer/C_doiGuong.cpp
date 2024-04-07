#include <bits/stdc++.h>
using namespace std;
bool doiGuong(char* s){
    int len = 0;
    while (s[len]) ++len;
    for (int i = 0; i < len/2; i++){
        if (s[i] != s[len-1-i]) return false;
    }
    return true;
}
int main(){
    char* s = new char [256];
    cin.getline(s, 256);
    if (doiGuong(s)) cout << "true";
    else cout << "false";
    return 0;
}
