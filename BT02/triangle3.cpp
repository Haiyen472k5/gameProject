#include <bits/stdc++.h>
using namespace std;
void renderTriangle(int n){
    for(int i = 0; i < n; i++){
        for (int ii = 0; ii < i; ii++){
            cout << " ";
        }
        for (int iii = 2*(n-i-1)+1; iii > 0; iii--){
            cout << "*";
        }
        cout << endl;
    }
}

int main(){
    int n; cin >> n;
    renderTriangle(n);

}
