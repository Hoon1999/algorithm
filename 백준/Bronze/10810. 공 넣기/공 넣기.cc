#include <iostream>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    // N = 배열의 크기
    // M = 반복횟수
    // i = start, j = end -> arr[i-1] ~ arr[j-1]
    // k = value
    int N,M;
    cin >> N >> M;
    int arr[N] = {0, };
    int i, j, k;
    
    for(int m = 0; m < M ; m++){
        cin >> i >> j >> k;
        for(;i <= j ; i++){
            arr[i-1] = k;
        }
    }
    for(int m = 0 ; m < N ; m++)
        cout << arr[m] << " ";
    return 0;
}