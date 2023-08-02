#include <iostream>
using namespace std;
int main(){
    // 음...입력이 무조건 28줄인건 알겠는데,
    // 만약 입력 횟수가 랜덤이면 어떻게 작성해야 되는지 모르겠다...
    ios_base::sync_with_stdio(false);
    int size = 30, k;
    int a[size] = {0, };
    for(int i = 0 ; i < size-2 ; i++){
        cin >> k;
        a[k-1] = 1;
    }
    for(int i = 0 ; i < size ; i++){
        if(a[i] == 0)
            cout << i+1 << "\n";
    }
    return 0;
}