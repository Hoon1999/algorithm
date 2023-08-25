#include <iostream>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    
    // 선언 및 초기화 ------------
    int max = 0, x, y;
    int matrix[9][9];
    for(int i = 0 ; i < 9 ; i++)
        for(int j = 0 ; j < 9 ; j++)
            cin >> matrix[i][j];
    
    // 동작 --------------------
    // max 값 탐색
    for(int i = 0 ; i < 9 ; i++)
        for(int j = 0 ; j < 9 ; j++)
            if(max <= matrix[i][j]) {
                max = matrix[i][j];
                x = i; y = j;
            }
    
    // 정답 출력 ----------------
    cout << max << "\n";
    cout << x+1 << " " << y+1 ;
    return 0;
}