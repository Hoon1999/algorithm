#include <iostream>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    // 선언 및 초기화 ----------------------
    bool 도화지[100][100] = {0};
    int x, y; // 색종이 left, bottom 좌표
    int k; // 색종이 개수 == 반복 회수
    int area = 0 ; // 넓이
    cin >> k;
    // 구현 -------------------------
    for(int i = 0 ; i < k ; i++ ){
        cin >> x >> y ;
        x--; y--;
        for(int w = 0; w < 10 ; w++) 
            for(int h = 0 ; h < 10 ; h++){
                도화지[x+w][y+h] += 1;
            }
    }
    // 정답 출력 ----------------------
    for(int i = 0 ; i < 100 ; i++){
        for(int j = 0 ; j < 100 ; j++){
            if(도화지[i][j] == true)
                area++;
        }
    }
    cout << area << endl;
    return 0;
}