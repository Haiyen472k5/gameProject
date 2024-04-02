#include <iostream>
#include <math.h>
using namespace std;
void print(int m , int n){
    for (int i = 0; i < m; i++){
        cout << " ";
    }
    for (int i = 0; i < n; i++){
        cout << "*";
    }
}

void triagle(int n){
    for (int i = 0; i < n; i++){
        print(n-1-i, 2*i + 1);
        cout << endl;

    }
}
int main(){
    int n; cin >> n;
    triagle(n);
    return 0;
}
