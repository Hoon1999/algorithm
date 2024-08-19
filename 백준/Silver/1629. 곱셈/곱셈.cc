#include <bits/stdc++.h>

using namespace std;

long long a, c;
long long solve(long long b) {
    // 기저 사례
    if(b == 1)
        return a % c;
    
    long long ret;
    ret = solve(b/2) * solve(b/2);
    ret = ret % c;
    if(b % 2 == 1)
        ret = (ret * (a % c)) % c;
    return ret;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    long long b;
    cin >> a >> b >> c;
    if (b == 0)
        cout << 1 % c;
    else
        cout << solve(b);
    
    return 0;
}