#include <iostream>
using namespace std;

int main() {
    // 윤년
    // 1. 4의 배수 && 100의 배수가 아닐때
    // 2. 400의 배수일때
    int a;
    cin >> a;
    
    if(a%4 == 0 && a%100 != 0)
        cout << 1;
    else if(a%400 == 0)
        cout << 1;
    else
        cout << 0;
    
    return 0;
}