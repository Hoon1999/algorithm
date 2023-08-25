#include <iostream>
#include <cmath>
using namespace std;

int calc(int);
int main() {
    int n;
    cin >> n;
    
    int size = (int)log10((double)n) + 1; // 자릿수
    
    
    for(int i = (n-size*9); i < n; i++){
        if(calc(i) == n) {
            cout << i;
            return 0;
        }
    }
    cout << 0;
    return 0;
}
int calc(int n) {
    int sum = n, size;
    size = (int)log10((double)n) + 1;
    for(int i = size; 0 < i ; i--){
        sum += (n%(int)pow(10,i)) / (int)pow(10,i-1);
    }
    
    return sum;
}