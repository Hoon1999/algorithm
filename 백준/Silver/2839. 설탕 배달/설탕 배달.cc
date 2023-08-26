#include <iostream>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    
    int n, min=5001, cnt, temp, result = -1;
    cin >> n;
    
    for(int i = n/5; 0 <= i ; i--){
        cnt = i;
        temp = n - i*5;
        if(temp%3 == 0){
            cnt += temp/3;
            if(cnt < min)
                min = cnt;
        }
    }
    if(min != 5001)
        result = min;
    cout << result;
    return 0;
}