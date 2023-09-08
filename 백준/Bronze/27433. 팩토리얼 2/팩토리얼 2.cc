#include <iostream>
using namespace std;

long facto(long n);
int main() {
    long n;
    cin >> n;
    n = facto(n);
    cout << n;
    return 0;
}
long facto(long n) {
    if(n == 0)
        return 1;
    return facto(n-1)*n;
}