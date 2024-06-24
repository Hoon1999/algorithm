#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n, m;
    map<int, string> myMap;
    map<string, int> myMapRe; //reverse
    string name;

    cin >> n >> m;
    
    for(int i = 1; i <= n; ++i) {
        cin >> name;
        myMap.insert({i, name});
        myMapRe.insert({name, i});
    }
    for(int i = 0; i < m; ++i) {
        cin >> name;
        if(atoi(name.c_str()) == 0) {
            // atoi 의 리턴 값이 0 이면, name 변수는 숫자 0 또는 문자열이다.
            cout << myMapRe.find(name)->second << "\n";
        } else {
            // 숫자를 입력으로 받은 경우.
            int key = atoi(name.c_str());
            cout << myMap.find(key)->second << "\n";
        }
    }
    return 0;
}