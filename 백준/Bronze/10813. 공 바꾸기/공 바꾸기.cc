#include <iostream>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    int N, M;
    cin >> N >> M; //초기화
    int arr[N];
    for(int i = 0 ; i < N ; i++){ //초기화
        arr[i] = i+1;
    }
    int i, j;
//-----------------------------
    //굳이 xor 교환을 쓴 이유 : 그냥 암기하려고..
    for(int m = 0 ; m < M ; m++){
        cin >> i >> j;
        if(arr[i-1] != arr[j-1]){
            arr[i-1] = arr[i-1]^arr[j-1];
            arr[j-1] ^= arr[i-1];
            arr[i-1] ^= arr[j-1];
        }
    }
    for(int n = 0 ; n < N ; n++){
        cout << arr[n] << " ";
    }
    return 0;
}