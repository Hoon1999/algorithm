#include <iostream>
using namespace std;


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    // i를 arr[i-1] 에 저장하면 메모리 공간의 낭비를 줄일 수는 있으나
    // 연산 횟수가 증가하기 때문에 그냥 배열의 크기를 하나 더 늘리고
    // arr[0] 을 사용하지 않는다.
    unsigned int n; // 반복 횟수
    cin >> n;
    unsigned int arr[10001] = { 0 };
    unsigned short temp = 0;
    // unsigned short result[n]; // 1~10000 사이의 값이 저장된 배열은 최대 20MB이므로 불가능.
    
    for(int i = 0; i < n; i++) {
        cin >> temp;
        arr[temp]++;
    }
    
    // 구현
    
    // 정답 출력
    for(int i = 1; i < 10001;) {
        if(arr[i] != 0) {
            cout << i << "\n" ;
            arr[i]--;
        }
        else
            i++;
    }
    return 0;
}