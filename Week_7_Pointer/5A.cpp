#include <bits/stdc++.h>
using namespace std;
int binarySearch(int key, int* arr, int low, int high){
    int mid = low + (high - low)/2;
    if (low > high) return -1;
    if (arr[mid] == key) return mid;
    else if (arr[mid] > key) return binarySearch(key, arr, low, mid-1);
    else return binarySearch(key, arr, mid+1, high);
}

int main(){
    int n; cin >> n;
    int* arr = new int [n];
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }
    int key; cin >> key;
    if (binarySearch(key, arr, 0, n-1) == -1) cout << "Not found.";
    else cout << binarySearch(key, arr, 0, n-1);


}
