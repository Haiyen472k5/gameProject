#include <bits/stdc++.h>
using namespace std;
int gcd(int a, int b);
void is_coprime(int a, int b);

int main(){
    int a, b; cin >> a >> b;
    int res = gcd(a, b);
    cout << res << endl;
    is_coprime(a, b);
}

int gcd(int a, int b){
    if (a == 0 || b == 0) return a+b;
    if (a >= b) return gcd(a%b, b);
    return gcd(a, b%a);
}

void is_coprime(int a, int b){
    if (gcd(a, b) == 1) cout << "a and b are coprime";
    else cout << "a and b are not coprime.";
}

