#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    int arr[n];
    double sum = 0;
    for (int i = 0; i < n; i++){
        cin >> arr[i];
        sum += arr[i];
    }

    for (int i = 0; i < n; i++){
        int min_pos = i;
        for (int j = i+1; j < n; j++){
            if (arr[j] < arr[min_pos]) min_pos = j;
        }
        swap(arr[i], arr[min_pos]);
    }

    cout << "Mean = " << fixed << setprecision(2) << sum / n << endl;
    cout << "Max = " << arr[n-1] << endl << "Min = " << arr[0];
    return 0;

}
