#include <bits/stdc++.h>
using namespace std;

void decimalToBinary(int n);
void binaryToDecimal(int n);
int main(){
    int n; cin >> n;
    if (n == 0) cout << 0;
}


void decimalToBinary(int n){
    if (n != 0){
        decimalToBinary(n/2);
        cout << n % 2;

    }
}

void binaryToDecimal(int n){
    int count = 0, res = 0;
    while (n != 0){
        int tmp = n % 10;
        res = res + tmp * pow(2, count);
        count++;
        n /= 10;
    }
    cout << res;
}
