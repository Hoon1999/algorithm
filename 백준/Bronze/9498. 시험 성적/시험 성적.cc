#include <iostream>
using namespace std;

int main() {
    // 0 ~ 100 integer
    int a ;
    cin >> a;
    
    if(100 >= a && a >= 90) cout << "A" ;
    else if (a >= 80) cout << "B";
    else if (a >= 70) cout << "C";
    else if (a >= 60) cout << "D";
    else cout << "F";
    
    return 0;
}