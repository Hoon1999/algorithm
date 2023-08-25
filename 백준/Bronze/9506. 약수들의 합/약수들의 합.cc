#include <iostream>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    
    // 선언 및 초기화
    int n = 0;
    int sum = 0;
    
    // 구현
    while(true){
        cin >> n;
        sum = 0;
        if(n == -1)
            break;
        for(int i = 1 ; i < n ; i++)
            if(n%i == 0)
                sum += i;
        if(sum == n) {
            cout << n << " = 1";
            for(int i = 2 ; i < n ; i++)
                if(n%i == 0)
                    cout << " + " << i;
            cout << "\n";
        }
        else
            cout << n << " is NOT perfect.\n";
        
    }
    // 정답 출력
    return 0;
}