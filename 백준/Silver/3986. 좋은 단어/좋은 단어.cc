#include <bits/stdc++.h>

using namespace std;

int n, cnt;
string str;
int main() {
    cin >> n;
    vector<char> v;
    
    for(int i = 0; i < n; ++i) {
        v.clear();
        cin >> str;
        for(int j = 0; j < str.length(); ++j) {
            v.push_back(str[j]);
            if(1 < v.size()) {
                if(*(v.end() - 1) == *(v.end() - 2)) {
                    v.pop_back();
                    v.pop_back();
                }
            }
        }
        if(v.size() == 0)
            cnt++;
    }
    cout << cnt;
    return 0;
}