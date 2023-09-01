#include <iostream>
#include <algorithm>
using namespace std;

void heapify(int* arr, int size);
void h(int* arr, int* size);
int main() {
    ios_base::sync_with_stdio(false);
    // 선언 및 초기화
    int n ;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    // 구현
    sort(arr, arr+n);
    
    // 정답 출력
    for(int i = 0; i < n; i++) {
        cout << arr[i] << "\n";
    }
    return 0;
}