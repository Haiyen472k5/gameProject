#include <bits/stdc++.h>
using namespace std;
void reverse(char* s, int dem){
    for (int i = 0; i < dem/2; ++i){
        char tmp = s[i];
        s[i] = s[dem-1-i];
        s[dem-1-i] = tmp;
    }
}
int main(){
    char* s = new char [256];
    cin.getline(s, 256);
    int dem = 0;
    while (s[dem] != '\0') ++dem;
    reverse(s, dem);
    cout << s;
}
