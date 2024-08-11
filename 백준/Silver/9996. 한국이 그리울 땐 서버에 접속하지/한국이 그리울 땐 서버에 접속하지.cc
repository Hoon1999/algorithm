#include <bits/stdc++.h>

using namespace std;

int main() {
    string str, first, last;
    int idx, k;
    vector<string> ret;
    
    cin >> k; // 반복 횟수
    cin >> str; // str : 패턴
    // 패턴 쪼개기
    idx = str.find("*");
    first = str.substr(0, idx);
    last = str.substr(idx+1);
    
    for(int i = 0; i < k ; ++i) {
        cin >> str; // 이제 str 에는 검사할 값이 들어온다 
        if(str.length() < first.length() + last.length()) {
            ret.push_back("NE"); 
        }
        else {
            if(first.compare(str.substr(0, idx)) == 0 && last.compare(str.substr(str.length()-last.length())) == 0)
                    ret.push_back("DA"); // Yes
            else
                ret.push_back("NE"); // No
        }
    }
    for(string s : ret)
        cout << s << "\n";
    return 0;
}