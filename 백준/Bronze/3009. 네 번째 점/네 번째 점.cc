#include <iostream>
using namespace std;
int main() {
    int x1 = 0, y1 = 0;
    int x2 = 0, y2 = 0;
    int x3 = 0, y3 = 0;
    int result1, result2;
    
    cin >> x1 >> y1;
    cin >> x2 >> y2;
    cin >> x3 >> y3;
    
    result1 = x1;
    result2 = y1;
    
    result1 = result1^x2;
    result2 = result2^y2;
    
    result1 = result1^x3;
    result2 = result2^y3;
    
    cout << result1 << " " << result2;
    return 0;
}