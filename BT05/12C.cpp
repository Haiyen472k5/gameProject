#include <bits/stdc++.h>
#define ll long long int
using namespace std;

ll factorial(int n){
    if (n == 0 || n == 1) return 1;
    return n * factorial(n-1);
}

int toHop(int k, int n){
    return factorial(n) / (factorial(k) * factorial(n-k));
}

int ktra(int k, int n){
    if (n >= 0 && n <= 20 && k >= 0 && k <= n){
            return 1;
        }
    return 0;
}

void nhapKN(int k[], int n[], int* soPhanTu){
    while (true){
        cin >> k[*soPhanTu] >> n[*soPhanTu];
        if (k[*soPhanTu] == -1 && n[*soPhanTu] == -1){
            break;
        }
        (*soPhanTu)++;
    }
}
int main(){
    int k[100], n[100];
    int soPhanTu = 0;
    nhapKN(k, n, &soPhanTu);
    for (int i = 0; i < soPhanTu; i++){
        if (ktra(k[i],n[i])){
            cout << toHop(k[i], n[i]) << endl;
        }
    }
    return 0;
}
