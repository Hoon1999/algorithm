#include <bits/stdc++.h>
using namespace std;

int n, k, temp;
vector<int> v;
map<int, int> m;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    // 입력을 전부 받아서 변수들을 초기화 해준다.
    cin >> n >> k;
    for(int i = 0; i < n; ++i) {
        // 최대 100,000 번 반복
        cin >> temp;
        v.push_back(temp);
    }
    
    // logic
    for(int i = 0 ; i <= n - k; ++i) {
        // n 은 최대 100,000 이다.
        // accumulate 로 k길이 만큼 누적합을 구해준다.
        // map 으로 보관한다.
        m.insert({accumulate(v.begin()+i, v.begin()+i+k, 0), 1});
    }
    
    // 가장 큰 값 찾기(map 은 자동으로 정렬 되니까 마지막 원소가 최대 값이 된다.)
    cout << (m.rbegin())->first << "\n";
    return 0;
}