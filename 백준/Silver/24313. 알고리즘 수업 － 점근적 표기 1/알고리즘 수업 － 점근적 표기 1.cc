#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    
    // 선언 및 초기화
    int a, b, result;
    int c, n;
    cin >> a >> b >> c >> n;
    
    // 구현
    if((c-a) < 0)
        result = 0;
    else {
        if(b <= (c-a) * n)
            result = 1;
        else
            result = 0;
    }
    // 정답 출력
    cout << result;
    return 0;
}