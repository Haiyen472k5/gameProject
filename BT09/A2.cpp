#include <iostream>
using namespace std;

int main(){
    int* p = new int;
    int* p2 = p;
    *p = 10;
    delete p; 
    //*p2 = 100;
    //cout << *p2;
    /* giải thích: vì p và p2 đang cùng trỏ tới cùng 1 vùng nhớ nên khi p được giải phóng thì lúc này p2 không trỏ tới vùng nhớ nào cả 
    tức là p1 = p2 = NULL*/
    ///delete p2;



    return 0;
}