#include <bits/stdc++.h>

using namespace std;

int main() {
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    
    map<string, bool, greater<string>> list; // 세 번째 인자에 greater<key의 자료형> 을 주면 내림차순 으로 정렬 된다.
    string name, flag;
    int n;
    cin >> n;
    
    for(int i = 0; i < n; ++i) {
        cin >> name >> flag;
        
        if(flag.compare("enter") == 0)
            list.insert({name, true});
        else {
            // 벡터 리스트에서 제거
            list.erase(name);
        }
    }
    // 출력
    for(auto iter = list.begin(); iter != list.end(); iter++) {
        cout << iter->first << "\n";
    }
    
    return 0;
}