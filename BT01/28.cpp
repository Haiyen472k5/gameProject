#include <bits/stdc++.h>
using namespace std;

int main(){
    for (int n = 0; n < 24; n++){
        if (n%12 == 0 && n/12 == 0) cout << "12 midnight" << endl;
        else if (n % 12 && n/12 == 0) cout << n << " am" << endl;
        else if (n%12 == 0 && n/12 == 1) cout << "12 noon" << endl;
        else {
            cout << (n % 12) << " pm" << endl;
        }

    }



}
