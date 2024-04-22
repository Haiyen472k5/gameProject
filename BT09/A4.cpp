#include <iostream>
using namespace std;

int main(){
    int a = 4;
    int* ptr = &a; ///p tro toi bien a => p thuoc vung STACK
    delete ptr;  ///lỗi do giải phòng vùng STACK
    return 0;
    ///Giai thich: do STACK là vùng do CPU quản lí nên không thể cản thiệp => không thể giải phóng

}