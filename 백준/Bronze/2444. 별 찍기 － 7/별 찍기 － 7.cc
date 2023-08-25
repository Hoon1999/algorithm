#include <iostream>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    
    int k ;
    cin >> k;
    
    for(int i = 1 ; i <= k ; i++){
        // s 는 space 의 첫글자
        for(int s = 0 ; s < (k-i) ; s++)
            cout << " ";
        // s 는 star 의 첫글자
        for(int s = 0 ; s < (2*i-1) ; s++)
            cout << "*";
        cout << "\n";
    }
    for(int i = (k-1) ; i >= 1 ; i--){
        for(int s = 0 ; s < (k-i) ; s++)
            cout << " ";
        for(int s = 0 ; s < (2*i-1) ; s++)
            cout << "*";
        cout << "\n";
    }
    return 0;
}