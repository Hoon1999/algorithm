#include <iostream>
using namespace std;
int main() {
    int x, y, min_x, min_y, max_x, max_y;
    int n;
    cin >> n >> x >> y;
    n--;
    min_x = x;
    min_y = y;
    max_x = x;
    max_y = y;
    for(int i = 0 ; i < n ; i++){
        cin >> x >> y;
        if(x < min_x)
            min_x = x;
        if(y < min_y)
            min_y = y;
        if(max_x < x)
            max_x = x;
        if(max_y < y)
            max_y = y;
    }
    x = max_x - min_x;
    y = max_y - min_y;
    cout << x*y;
    return 0;
}