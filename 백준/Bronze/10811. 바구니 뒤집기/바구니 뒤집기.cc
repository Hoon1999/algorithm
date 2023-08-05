#include <iostream>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    // ----------------------
    int N, M, i, j, temp;
    cin >> N >> M;
    int arr[N];
    for(int n = 0 ; n < N ;n++){
        arr[n] = n+1;
    }
    // -----------------------
    for(int m = 0 ; m < M ; m++){
        cin >> i >> j;
        --i; --j;
        for(;i <= j ;){
            temp = arr[i];
            arr[i++] = arr[j];
            arr[j--] = temp;
        }
    }
    for(int n = 0 ; n < N ;){
        cout << arr[n++] << " ";
    }
    return 0;
}