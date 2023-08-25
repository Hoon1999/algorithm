#include <iostream>
using namespace std;

bool 소수판별(int);
int main() {
    // m 이상 n 이하 수 중 소수 판별
    int m, n;
    cin >> m >> n;
    int sum = 0, min = n;
    bool b = false;
    
    for(int i = m ; i <= n ; i++){
        b = false;
        b = 소수판별(i);
        if(b) {
            sum += i;
            if(i < min) min = i;
        }
    }
    if(sum == 0)
        cout << "-1";
    else
        cout << sum << "\n" << min ;
    return 0;
}
bool 소수판별(int n) {
    bool b = false;
    if(n == 1)
        return false;
    else if(n == 2)
        return true;
    for(int i = 2; i < n; i++){
        if(n%i == 0) {
            b = true;
            break;
        }
    }
    return !b;
}