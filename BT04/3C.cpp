#include <bits/stdc++.h>
using namespace std;

bool soDoiGuong(int n){
    int tmp = n;
    int res = 0;
    do{
        int dig = tmp%10;
        res = (res*10) + dig;
        tmp = tmp/10;
    }while(tmp != 0);
    if(res == n) return true;
    return false;
}

int main(){
    int t; cin >> t;
    while (t--){
        int a, b; cin >> a >> b;
        int dem = 0;
        for (int i = a; i <= b; i++){
            if (soDoiGuong(i)) dem++;
        }
        cout << dem << endl;
    }
    return 0;
}
