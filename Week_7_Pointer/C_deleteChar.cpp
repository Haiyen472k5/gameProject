#include <bits/stdc++.h>
using namespace std;

void del_char(char* s, char c){
    int i = 0, j = 0;
    while (s[i]){
        if (s[i] != c){
            s[j] = s[i];
            j++;
        }
        i++;
    }
    s[j] = '\0';
}

int main(){
    char* s = new char [256];
    cin.getline(s, 256);
    char ch; cin >> ch;
    del_char(s, ch);
    cout << s;

}
