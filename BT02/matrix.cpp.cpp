#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    int initsum = 0;
    for (int i = 1; i <= n; i++){
        initsum +=i;
    }
    for (int i = 1; i <= n; i++){
        int sum = initsum;
        for (int ii = i; ii <= n; ii++){
            cout << ii << " ";
            sum = sum - ii;
        }
        for (int iii = 1; iii <= sum; iii++){
            cout << iii << " ";
            sum = sum - iii;
        }
        cout << endl;
    }
}
