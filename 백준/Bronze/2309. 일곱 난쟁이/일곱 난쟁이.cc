#include <bits/stdc++.h>

using namespace std;

int arr[9];
void combi(int start, vector<int> &v);
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    // 정답. 9 combi 7 로 구한 배열의 합이 100인 경우가 정답
    // 1. arr 에 아홉 난쟁이 키를 삽입한다.
    // 2. combination 함수 기저사례에서 키의 합을 구한다.
    // 3. 합이 100이면 해당 배열을 정답으로 출력한다.
    
    // 1.
    for(int i = 0; i < 9 ; i++) {
        cin >> arr[i];
    }
    sort(arr, arr+9);
    
    vector<int> v;
    combi(0, v);
    
    return 0;
}
void combi(int start, vector<int> &v) {
    // 2.
    if(v.size() == 7) {
        int sum = accumulate(v.begin(), v.end(), 0);
        // 3.
        if(sum == 100) {
            for(int x : v)
                cout << x << "\n";
            exit(0);
        }
        return ; 
    }
    for(int i = start ; i < 9 ; i++) {
        v.push_back(arr[i]);
        combi(start+1, v);
        v.pop_back();
    }
}