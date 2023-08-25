#include <iostream>
using namespace std;

char convert(int);
int main() {
    ios_base::sync_with_stdio(false);
    
    // 선언 및 초기화 ----------------------------
    int n, b; // 숫자 n, 진법 b
    char temp;
    string result;
    int size = 0, temp2;
    
    cin >> n >> b;
    temp2 = n;
    for(int i = 0 ; temp2 != 0 ; i++) {
        temp2 = temp2 / b;
        size++;
    }
    result.resize(size);
    // 구현 -------------------------------
    for(int i = 0 ; n != 0 ; i++){
        temp = convert(n % b);
        n = n / b;
        result[size-1-i] = temp;
    }
    // 정답 제출 ----------------------
    cout << result << endl;
    return 0;
}
char convert(int n) {
    char c;
    
    if( 0 <= n && n <= 9 ){
        c = n + 48;
    }
    else
        c = n + 55;
    
    return c;
}