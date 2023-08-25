#include <iostream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    int a, b, temp = 0;
    cin >> a >> b;
    
    // for ---
    temp += a / 100 * 1;
    a %= 100;
    temp += (a / 10) * 10;
    a %= 10;
    temp += (a / 1) * 100;
    // ---
    a = temp;
    
    temp = 0;
    //for ---
    temp += b / 100 * 1;
    b %= 100;
    temp += (b / 10) * 10;
    b %= 10;
    temp += (b / 1) * 100;
    // ---
    b = temp;
    
    if( a > b )
        cout << a;
    else
        cout << b;
    return 0;
}