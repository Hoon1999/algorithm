#include <iostream>
#include <cmath>
using namespace std;

int main() {
    // 선언 및 초기화
    int n;
    int result = 4;
    
    cin >> n;
    // 구현
    for(int i = 1 ; i <= n ; i++){
        result += 5;
        result += (pow(2, i-1)-1)*4*2;
        result += (pow(4, i-1)-((pow(2, i-1)-1)*2)-1)*3;
    }
    // 정답출력
    cout << result;
    return 0;
}