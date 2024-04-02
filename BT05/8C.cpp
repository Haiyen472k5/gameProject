#include <bits/stdc++.h>
using namespace std;

int round_with_math(double x){
    if (x >= 0){
        if (x - int(x) >= 0.5) return ceil(x);
        return floor(x);
    }
    else{
        if (x - int(x) >= -0.5) return ceil(x);
        return floor(x);
    }
}

int round_without_math(double x){
    if (x >= 0) return int(x+0.5);
    return int(x-0.5);
}
int main(){
    double x; cin >> x;
    cout << round_without_math(x) << endl;

