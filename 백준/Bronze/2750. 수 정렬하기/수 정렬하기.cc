#include <iostream>
using namespace std;

int main() {
    int n, temp;
    cin >> n;
    int arr[n];
    for(int i = 0 ; i < n; i++){
        cin >>arr[i];
    }
    
    // 버블정렬
    for(int i = 0; i < n-1; i++)
        for(int j = 0; j < n-1-i; j++){
            if(arr[j] > arr[j+1]) {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
                
        }
    for(int i = 0; i < n; i++) {
        cout << arr[i] << endl;
    }
    return 0;
}