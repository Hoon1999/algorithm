#include <bits/stdc++.h>

using namespace std;

int n;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    while(cin >> n) {
        long long dividend = 1;
        int cnt = 1;
        while(1) {
            if(dividend % n == 0) {
                cout << cnt << "\n";
                break;
            }
            dividend = dividend * 10 + 1;
            dividend = dividend % n;
            cnt++;
        }
    }
    return 0;
}