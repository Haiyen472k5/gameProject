#include <bits/stdc++.h>
using namespace std;
void generate_random_array(int arr[], int n){
    srand(time(NULL));
    for (int i = 0; i < n; i++){
        arr[i] = rand()%50;
    }
}
void print(int arr[], int n){
    for (int i = 0; i < n-2; i++){
        for (int j = i+1; j < n-1; j ++){
            for (int k = j+1; k < n; k++){
                int sum = arr[i] + arr[j] + arr[k];
                if (!(sum%25)){
                    cout << arr[i] << " " << arr[j] << " " << arr[k] << endl;
                }
            }
        }
    }
}
int main(){
    int n; cin >> n;
    int arr[n];
    generate_random_array(arr, n);
    print(arr, n);

    return 0;

}

