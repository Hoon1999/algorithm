#include <iostream>

using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    
    // 선언 및 초기화
    int arr[5], avg = 0, temp;
    for(int i = 0 ; i < 5; i++) {
        cin >> arr[i];
        avg += arr[i];
    }
    
    // 구현
    // 삽입 정렬
    for(int i = 0; i < 4; i++) {
        temp = arr[i+1];
        for(int j = i; j >=0; j--) {
            if(arr[j] >= temp) {
                arr[j+1] = arr[j];
                arr[j] = temp;
            }
            else {
                arr[j+1] = temp;
                break;
            }
        }
    }
    avg = avg / 5;
    temp = arr[2]; // 중앙값
    
    // 정답 출력
    cout << avg << endl;
    cout << temp;
    return 0;
}