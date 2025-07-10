#include <bits/stdc++.h>

using namespace std;

int n;
int cnt[26];
string str;
int main() {
    char c = '\0';
    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> str;
        cnt[str[0] - 'a']++;
    }

    for(int i = 0; i < 26; i++) {
        if(cnt[i] >= 5) {
            c = i + 'a';
            cout << c;
        }
    }
    if(c == '\0')
        cout << "PREDAJA";
    cout << "\n";
    return 0;
}