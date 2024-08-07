#include <bits/stdc++.h>

using namespace std; 

int fee[3];
int enter[3];
int leave[3];
int cnt, start, last, sum;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    for(int i = 0; i < 3; ++i) {
        cin >> fee[i];
    }
    
    for(int i = 0; i < 6; ++i) {
        if(i%2)
            cin >> leave[i/2];
        else
            cin >> enter[i/2];
    }
    
    start = *min_element(enter, enter+3);
    last = *max_element(leave, leave+3);
    sum = 0;
    for(int i = start; i < last; ++i) {
        cnt = 0;
        for(int j = 0; j < 3; ++j) {
            if(enter[j] <= i && i < leave[j])
                cnt++;
        }
        sum += cnt * fee[cnt-1];
    }
    cout << sum;
    return 0;
}