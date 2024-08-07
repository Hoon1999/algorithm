#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    
    // Logic
    // 1. cnt[26] 을 0으로 초기화 한다.
    // 2. 입력 값을 char[100]배열에 할당한다.
    // 3. 해당 배열에서 값을 하나씩 꺼낸다.
    // 4. 꺼낸값 - 'a' 를 값을 인덱스로 하여 cnt[idx]++ 을 해준다.
    // 5. cnt 를 정답으로 출력한다.
    
    // 1.
    int cnt[26] = {0}, i = 0;
    char input[100], ch;
    // 2.
    while(scanf(" %c", &ch) != EOF) {
        input[i++] = ch;
    }
    // 3. 4.
    for(int j = --i; j >= 0; --j) {
        cnt[input[j] - 'a'] += 1;
    }
    // 5.
    for(i = 0; i < 26; ++i) {
        cout << cnt[i] << " ";
    }
    
    return 0;
}