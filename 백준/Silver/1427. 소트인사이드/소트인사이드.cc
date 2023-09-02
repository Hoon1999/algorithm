#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    // 변수 선언 및 초기화
    int n; cin >> n;
    int k = (int)log10((double)n)+1; // 자릿수
    int arr[k] = {0};
    for(int i = 0; i < k; i++) {
        arr[i] = (n%(int)pow(10,k-i)) / (int)pow(10, k-1-i);
    }
    
    // 구현
    sort(arr, arr+k, greater<int>());
    
    // 정답 출력
    for(int i = 0 ; i < k ; i++) {
        cout << arr[i];
    }
    return 0;
}