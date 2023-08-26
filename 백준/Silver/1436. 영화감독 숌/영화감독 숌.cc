#include <iostream>
#include <cmath>
using namespace std;

int 종말의수check(int);
int main() {
    int n, result = 0, cnt = 1;
    cin >> n;
    bool b = true; // for문 탈출 시그널
    if(n == 1)
    {
        cout << "666";
        return 0;
    }
    for(int i = 667; b == true; i++){
        result = 종말의수check(i);
        if(result)
            cnt++;
        if(cnt == n)
            b = false;
    }
    cout << result;
    return 0;
}
int 종말의수check(int n) {
    int length = (int)log10((double)n) + 1; // 자리수
    int t; // temp
    bool b1 = false, b2 = false, b3 = false;
    for(int i = length; 0 < i ; i--){
        t = (n%(int)pow(10, i)/(int)pow(10,i-1));
        if(t != 6) {
            b1 = false;
            b2 = false;
            b3 = false;
        }
        else if(b2) {
            b3 = true;
            break;
        }
        else if(b1)
            b2 = true;
        else
            b1 = true;
    }
    if(b1 && b2 && b3)
        return n;
    return 0;
}