#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n, temp;
    map<int, int> m;
    cin >> n;
    
    for(int i = 0; i < n; ++i) {
        cin >> temp;
        auto pair = m.insert({temp, 1});
        if(!(pair.second)) {
            m[temp] = m[temp]+1;
        }
    }
    cin >> n;
    for(int i = 0; i < n; ++i) {
        cin >> temp;
        cout << m[temp] << " ";
    }
    return 0;
}