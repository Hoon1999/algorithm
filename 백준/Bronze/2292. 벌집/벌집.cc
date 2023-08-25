#include <iostream>
using namespace std;
int main() {
    
    int n ;
    int sum=1;
    int result=1;
    cin >> n;
    for(int i = 0 ; i < n ; i++){
        sum += 6*i; // sum 값 : 1, 7, 19, ...
        if(n <= sum)
            break;
        result++;
    }
    // 정답출력
    cout << result;
    return 0;
}