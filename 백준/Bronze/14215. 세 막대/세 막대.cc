#include <iostream>
using namespace std;
int main() {
    int a, b, c, max, x, y, sum;
    cin >> a >> b >> c;
    max = a;
    x = b;
    y = c;
    if(max < b){
        max = b;
        x = a;
        y = c;
    }
    if(max < c){
        max = c;
        x = a;
        y = b;
    }
    sum = x+y;
    
    if((x+y) <= max)
        sum += (sum-1);
    else
        sum += max;
    cout << sum;
    return 0;
}