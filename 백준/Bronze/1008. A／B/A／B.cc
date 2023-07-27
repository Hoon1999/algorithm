#include <iostream>

using namespace std;

int main() {
    int a, b;
    double c;
    cin >> a;
    cin >> b;
    c = (double)a / (double)b;
    cout.precision(10);
    cout << c;
    return 0;
}