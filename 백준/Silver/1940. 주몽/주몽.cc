#include <bits/stdc++.h>

using namespace std;

int n, m, cnt, sum;
int nums[15004];
vector<int> v;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    // Logic : n Combination 2 으로 나온 값의 합이 m과 동일한 경우 카운트
    cin >> n >> m;
    
    // 숫자들을 전부 보관한다.
    for(int i = 0; i < n; ++i) {
        cin >> nums[i];
    }
    
    // n Combination 2
    for(int i = 0; i < n; ++i) {
        for(int j = i+1; j < n; ++j) {
            sum = nums[i] + nums[j];
            if(sum == m)
                cnt++;
        }
    }
    cout << cnt;
    return 0;
}