#include <bits/stdc++.h>
using namespace std;

struct Point{
    double x, y;
    void nhap(){
        cin >> x >>y;
    }
};

struct React{
    double x, y;///toa do
    double w, h;/// chieu dai, rong
    void nhap(){
        cin >> x >> y >> w >> h;
    }

    bool contains(const Point p){
        return (p.x >= x && p.x <= abs(x-w) && p.y <= y && p.y <= abs(y-h));
    }

};
int main(){
    React myReact;
    myReact.nhap();
    Point p;
    p.nhap();
    if(myReact.contains(p)) cout << "true";
    else cout << "false";

}
