#include <iostream>
using namespace std;
int main() {
    int n, m;
    cin >> n >> m;
    int arr[n];
    for(int i = 0; i < n ; i++)
        cin >> arr[i];
    
    int d; // distance
    int min = m, result ;
    
    for(int i = 0; i < n-2; i++)
        for(int j = i+1; j < n-1 ; j++)
            for(int k = j+1 ; k < n ; k++){
                d = m - (arr[i]+arr[j]+arr[k]);
                if(0 <= d && d <= min) {
                    min = d;
                    result = arr[i] + arr[j] + arr[k];
                } 
            }
    
    cout << result;
    return 0;
}