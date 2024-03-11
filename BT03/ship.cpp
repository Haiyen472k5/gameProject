#include <bits/stdc++.h>
using namespace std;
struct React{
    double x, y;///toa do
    double w, h;/// chieu dai, rong
};

struct Ship{
    React myReact;
    string id;
    float dx, dy;
    void move(){
        myReact.x += dx;
        myReact.y += dy;
    }
    void nhap(){
        cin >> myReact.x >> myReact.y >> id >> dx >> dy;
    }
};

void display(const Ship& ship){
    cout << ship.myReact.x << " " << ship.myReact.y << endl;
}

int main(){
    Ship ship1, ship2;
    int loop = 0;
    int n; cin >> n;
    ship1.nhap();
    ship2.nhap();
    while (loop < n){
        ship1.move(); ship2.move();
        cout << "ship 1: "; display(ship1);
        cout << "ship 2: "; display(ship2);
        loop++;
    }


}
