#include <iostream>
#include <algorithm>
using namespace std;

bool cmp(const string a, const string b);
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    // 변수 선언 및 초기화
    int n;
    cin >> n;
    string str[n];
    for(int i = 0; i < n; i++) {
        cin >> str[i];
    }
    // 구현
    sort(str, str+n, cmp);
    
    // 정답 출력
    for(int i = 0; i < n; i++) {
        if(i == n-1) {
            cout << str[i] << "\n";
        }
        else if(!str[i].compare(str[i+1])) {
            continue;
        }
        else {
            cout << str[i] << "\n";
        }
    }
    
    return 0;
}
bool cmp(const string a, const string b) {
    
    if(a.length() < b.length()) {
        return true;
    }
    else if(a.length() == b.length()) {
        for(int i = 0; i < a.length(); i++) {
            if(a.at(i) < b.at(i)) {
                return true;
            }
            else if(a.at(i) == b.at(i)) {
                continue;
            }
            else {
                return false;
            }
        }
    }
    else {
        return false;
    }
    return false; // 완전 동일한 문자열이면 여기에 도착한다.
}