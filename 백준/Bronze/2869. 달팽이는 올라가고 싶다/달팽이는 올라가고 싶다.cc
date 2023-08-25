#include <iostream>
#include <cmath>
using namespace std;
int main() {
    // 선언 및 초기화
    double a; 
    int b, v;
    int result = 0;
    // 구현
    cin >> a >> b >> v;
    result = ceil((v-a)/(a-b))+1;
    // 정답 출력
    cout << result;
    return 0;
}