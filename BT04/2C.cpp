#include <bits/stdc++.h>
using namespace std;
bool isSymmetric(char str[]){
    int len = strlen(str);
    for (int i = 0; i < len/2; i++){
        if (str[i] != str[len-1-i]) return false;
    }
    return true;
}
int main(){
    char str[100];
    cin >> str;
    if (isSymmetric(str)) cout << "Yes";
    else cout << "No";
    return 0;

}
