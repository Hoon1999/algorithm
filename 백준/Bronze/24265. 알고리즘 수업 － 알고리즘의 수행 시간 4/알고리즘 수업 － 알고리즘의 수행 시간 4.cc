#include <iostream>
using namespace std;
int main() {
    // (n-1)+(n-2)+...(0n+1) = (n-1)*n + b
    // O(n^2)
    
    unsigned long long n, sum = 0;
    cin >> n;
    
    for(int i = 0 ; i < n ; i++){
        sum += i;
    }
    cout << sum << "\n2";
    return 0;
}