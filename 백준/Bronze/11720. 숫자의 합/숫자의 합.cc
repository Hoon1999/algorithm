#include <iostream>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    int n, sum = 0;
    cin >> n;
    string str;
    cin >> str;
    for(int i = 0 ; i < n ; i++){
        sum += (int)str[i] - '0';
    }
    cout << sum;
    return 0;
}