#include <iostream>
using namespace std;
int main() {
    // 선언 및 초기화
    int n, k, result;
    cin >> n >> k;
    int arr[n];
    for(int i = 0; i < n ; i++)
        cin >> arr[i];
    
    // 구현
    // 삽입 정렬
    for(int i = 0; i < n-1 ; i++) {
        result = arr[i+1]; // 임시변수 result
        for(int j = i ; j >= 0; j--) {
            if(arr[j] >= result) {
                arr[j+1] = arr[j];
                arr[j] = result;
            }
            else {
                arr[j+1] = result;
                break;
            }
        }
    }
    result = arr[n-k];
    
    // 정답 출력
    cout << result;
    
    return 0;
}