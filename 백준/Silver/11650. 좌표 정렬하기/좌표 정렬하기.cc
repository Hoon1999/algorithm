#include <iostream>
#include <algorithm>

using namespace std;
typedef struct {
  int x;
  int y;
} pt;

bool cmp(const pt& a, const pt& b);

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    // 변수 선언 및 초기화
    int n;
    cin >> n;
    pt arr[n];
    for(int i = 0; i < n; i++) {
        cin >> arr[i].x >> arr[i].y;
    }
    
    // 구현
    sort(arr, arr+n, cmp);
    
    // 정답 출력
    for(int i = 0 ; i < n ; i++ ) {
        cout << arr[i].x << " " << arr[i].y << "\n";
    }
    
    return 0;
}

bool cmp(const pt& a, const pt& b) {
    if(a.x < b.x) {
        return true;
    }
    else if(a.x == b.x) {
        if(a.y < b.y) {
            return true;
        }
        else {
            return false;
        }
    }
    else {
        return false;
    }
}