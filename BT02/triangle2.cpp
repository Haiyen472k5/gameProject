#include <bits/stdc++.h>
using namespace std;

void renderTriangle(int n){
    for (int i = 0; i < n; i++){
        for (int ii = n - i - 1; ii > 0; ii--){
            cout << " ";
        }
        for (int iii = 1; iii <= 2*i+1; iii++){
            cout << "*";
        }
        cout << endl;
    }
}

int main(){
    int n; cin >> n;
    renderTriangle(n);

}
