#include <iostream>
#include <set>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    // 선언 및 초기화 
    int n, m, temp;
    set<int> si;
    cin >> n;
    for(int i = 0 ; i < n; i++) {
        cin >> temp;
        si.insert(temp);
    }
    
    // 구현
    
    // 정답 출력
    cin >> m;
    for(int i = 0; i < m; i++) {
        cin >> temp;
        cout << si.count(temp) << " ";
    }
    return 0;
}