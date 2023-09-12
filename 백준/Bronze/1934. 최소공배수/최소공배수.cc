#include <iostream>
using namespace std;

unsigned short self_gcd(unsigned short a, unsigned short b);
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    //변수 선언 및 초기화
    unsigned short a, b, n;
    cin >> n;
    
    // 구현
    for(int i = 0; i < n ; i++)  {
        cin >> a >> b;
        cout << (a*b/self_gcd(a,b)) << "\n";
    }
    // 정답 출력
    // line 16 에서 정답을 출력
    return 0;
}
unsigned short self_gcd(unsigned short a, unsigned short b) {
    // 작은 값이 b 에 위치하게 한다.
    unsigned short temp;
    if(a < b) {
        temp = a;
        a = b;
        b = temp;
    }
    while(b != 0) {
        temp = a%b;
        a = b;
        b = temp;
    }
    return a;
}