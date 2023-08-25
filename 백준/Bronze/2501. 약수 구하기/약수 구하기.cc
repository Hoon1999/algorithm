#include <iostream>
using namespace std;
int main() {
    // 선언 및 초기화
    int n, k;
    int result = 0;
    
    // 구현
    cin >> n >> k;
    for(int i = 1 ; i <= n ; i++){
        if(n%i==0)
            k--;
        if(k == 0){
            result = i;
            break;
        }
    }
    if(k != 0)
        result = 0;
    
    // 정답 출력
    cout << result;
    return 0;
}