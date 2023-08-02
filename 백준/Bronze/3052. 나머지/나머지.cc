#include <iostream>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    int remain[10], dividend, cnt = 0;
    for(int i = 0; i < 10 ; i++){
        cin >> dividend;
        remain[i] = dividend % 42;
    }
    for(int i = 0 ; i < 10 ; i++){
        int check = 0; // 0이면 중복값이 아니라는 의미
        for(int j = 0; j < i; j++){
            if(remain[j] == remain[i]){
                check = 1;
                break;
            }
        }
        if(check == 0)
            cnt++;
    }
    cout << cnt;
    return 0;
}