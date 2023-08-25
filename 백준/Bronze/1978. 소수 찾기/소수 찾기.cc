#include <iostream>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    int n, k, cnt = 0;
    bool s = true; // 소수 판별 스위치. 소수가 아니면 false가 된다.
    
    cin >> n;
    for(int i = 0 ; i < n ; i++){
        cin >> k;
        s = true;
        if(k == 1)
            continue;
        if(k == 2) {
            cnt++;
            continue;
        }
        for(int j = 2; j < k ; j++)
            if(k % j == 0){
                s = false;
                break;
            }
        if(s)
            cnt++;
    }
    cout << cnt;
    return 0;
}