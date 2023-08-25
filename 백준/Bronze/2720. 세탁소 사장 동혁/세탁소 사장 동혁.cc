#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    
    // 선언 및 초기화 -------------------------------
    int n; // 반복 횟수
    int k; // 입력 받은 값
    int result[4]; // 쿼터, 다임, 니켈, 페니
    
    cin >> n;
    // 구현 ------------------------------------
    for(int i = 0; i < n ; i++){
        cin >> k;
        result[0] = k/25;
        k = k%25;
        
        result[1] = k/10;
        k = k%10;
        
        result[2] = k/5;
        k = k%5;
        
        result[3] = k;
        
        cout << result[0] << " ";
        cout << result[1] << " ";
        cout << result[2] << " ";
        cout << result[3] << "\n";
    }
    // 정답 출력 ----------------------------------
    // line 28 ~ line 31 에서 정답을 출력함
    return 0;
}