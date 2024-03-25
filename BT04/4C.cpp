#include <bits/stdc++.h>
using namespace std;

bool isValid(int x, int y, int m, int n){
    return (x >= 0 && x < m && y >= 0 && y < n);
}

int main(){
    int m, n; cin >> m >> n;
    char arr[m][n];
    for (int i = 0; i < m; i++){
        for (int j = 0; j < n; j++){
            cin >> arr[i][j];
        }
    }
    for (int i = 0; i < m; i++){
        for (int j = 0; j < n; j++){
            if (arr[i][j] != '*'){
                int dem = 0;
                for (int dx = -1; dx <=1; dx++){
                    for (int dy = -1; dy <=1; dy++){
                        if (dx == 0 && dy == 0) continue;
                        int newX = i + dx;
                        int newY = j + dy;
                        if (isValid(newX, newY, m, n)  && arr[newX][newY] == '*') dem++;
                    }
                }
                arr[i][j] = char(dem+48);
            }
        }
    }
    for (int i = 0; i < m; i++){
        for (int j = 0; j < n; j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
