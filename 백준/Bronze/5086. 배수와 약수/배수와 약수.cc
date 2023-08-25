#include <iostream>
using namespace std;

int main() {
    // 선언 및 초기화
    int a = 1, b=1;
    
    // 구현
    while(true){
        cin >> a >> b;
        if(a == 0 || b == 0)
            break;
        if(b%a == 0)
            cout << "factor\n";
        else if(a%b == 0)
            cout << "multiple\n";
        else
            cout << "neither\n";
    }
    // 정답 출력
    // line 14, line 16, line 18
    return 0;
}