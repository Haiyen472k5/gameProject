#include <bits/stdc++.h>
using namespace std;

int main(){
    ///Cach tao 1 matrix x*y va khoi tao gtri moi o = 0;
    int x, y; cin >> x >> y;
    vector<vector<int>> matrix(x, vector<int>(y,0));
    int top = 0, bottom = x-1, left = 0, right = y-1;
    int val = 1;
    while (top <= bottom && left <= right){
        for (int i = left; i <= right; i++){
            matrix[top][i] = val++;
        }
        top++;
        for (int i = top; i <= bottom; i++){
            matrix[i][right] = val++;
        }
        right--;
        for (int i = right; i >= left; i--){
            matrix[bottom][i] = val++;
        }
        bottom--;
        for (int i = bottom; i>= top; i--){
            matrix[i][left] = val++;
        }
        left++;
    }
    for (int i = 0; i < x; i++){
        for (int j = 0; j < y; j++){
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
