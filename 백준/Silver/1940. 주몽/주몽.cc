#include <bits/stdc++.h>

using namespace std;

int n, m, cnt = 0;
int main() {
    cin >> n >> m;
    int arr[n];
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    for(int i = 0; i < n-1; i++) {
        for(int j = i+1; j < n; j++) {
            if((arr[i] + arr[j]) == m)
                cnt++;
        }
    }
    cout << cnt << "\n";
    return 0;
}