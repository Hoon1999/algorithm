#include <bits/stdc++.h>

using namespace std;

int n, m;
map<string, int> mp;
string arr[100004];
string str;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    cin >> n >> m;

    for(int i = 1; i <= n; i++ ) {
        cin >> str;
        mp.insert({str, i});
        arr[i] = str;
    }

    for(int i = 0; i < m; i++) {
        cin >> str;
        if(atoi(str.c_str()) == 0) {
            cout << (mp.find(str))->second << "\n";
        } else {
            cout << arr[atoi(str.c_str())] << "\n";
        }
    }
    return 0;
}