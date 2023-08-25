#include <iostream>
using namespace std;

void 삼각형유형출력(int, int, int);
int main() {
    int a, b, c;
    
    while(true) {
        cin >> a >> b >> c;
        if(a == 0 || b == 0 || c == 0)
            break;
        삼각형유형출력(a, b, c);
    }
    
    return 0;
}
void 삼각형유형출력(int a, int b, int c) {
    int max = a;
    int x = b, y = c;
    if(a < b){
        max = b;
        x = a;
        y = c;
    }
    if(b < c){
        max = c;
        x = a;
        y = b;
    }
    if(max >= (x + y))
        cout << "Invalid\n";
    else if(max == x && x == y)
        cout << "Equilateral\n";
    else if(max == x || max == y || x == y)
        cout << "Isosceles\n";
    else
        cout << "Scalene\n";
}