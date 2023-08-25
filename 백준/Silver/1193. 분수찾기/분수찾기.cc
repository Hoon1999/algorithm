#include <iostream>
using namespace std;

int main() {
    // 선언 및 초기화
    int sum = 0;
    int k;
    
    // 구현
    cin >> k;
    for(int i = 1; i <= k ; i++){
        sum += i;
        if(k <= sum) {
            if(i%2) {
                cout << 1+(sum-k) << "/" << i-(sum-k);
                break;
            }
            else {
                cout << i-(sum-k) << "/" << 1+(sum-k);
                break;
            }
        }
    }
    // 정답출력
    // line 15 or line 19;
    return 0;
}