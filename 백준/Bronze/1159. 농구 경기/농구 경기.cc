#include <bits/stdc++.h>

using namespace std;

int cntArr[26];
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int k;
    string name;
    bool flag = false;
    cin >> k;
    
    for(int i = 0; i < k; ++i) {
        cin >> name;
        cntArr[name[0] - 'a']++;
    }
    
    for(int i = 0 ; i < 26; ++i) {
        if(cntArr[i] >= 5){
            cout << (char)(i + 'a');
            flag = true;
        }
    }
    if(!flag)
        cout << "PREDAJA";
    return 0;
}