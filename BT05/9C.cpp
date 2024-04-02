#include <iostream>
#include <stdlib.h>
#include <ctime>
using namespace std;
void random_less_than_n(int n){
    srand(time(NULL));
    cout << rand() % n;
}

int main(){
    int n; cin >> n;
    random_less_than_n(n);
}


