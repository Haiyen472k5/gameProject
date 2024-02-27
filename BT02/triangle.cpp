#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    for (int i = 0; i < n; i++){
        for (int ii = 0; ii < i; ii++){
            cout << " ";
        }
        for (int iii = n-i; iii > 0; iii--){
            cout << "*";
        }
        cout << endl;
    }
}
