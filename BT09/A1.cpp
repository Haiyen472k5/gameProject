#include <iostream>
#include <cstring>
using namespace std;

char* concat(const char* ch, const char* ch1);

int main(){
    const char* ch = "Hello";
    const char* ch1 = "World";
    const char* connect = concat(ch, ch1);
    cout << connect;
    return 0;
}

char* concat(const char* ch, const char* ch1){
    int len = strlen(ch) + strlen(ch1);
    char* combined_str = new char [len];
    strcpy(combined_str, ch);
    strcat(combined_str, ch1);
    
    return combined_str;
}
