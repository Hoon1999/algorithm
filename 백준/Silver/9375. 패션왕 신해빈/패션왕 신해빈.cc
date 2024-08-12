#include <bits/stdc++.h>
using namespace std;

int n, m, rst;
string str;
int main() {
    cin >> n;
    
    for(int i = 0; i < n ; i++) {
        cin >> m;
        map<string, int> mp;
        for(int j = 0; j < m; j++) {
            cin >> str; // 버림
            cin >> str;
            mp[str]++;
        }
        rst = 1;
        for(auto iter : mp) {
            rst *= iter.second + 1;
        }
        rst--;
        cout << rst << "\n";
    }
    return 0;
}