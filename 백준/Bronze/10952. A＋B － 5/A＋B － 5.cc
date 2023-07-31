#include <iostream>
using namespace std;
int main() {
    // 문제가 이해가 안된다.
    // 일단 (0 < A, B < 10) 조건은 당연히
    // A 는 10 이상이어도 되고, B는 0 이하여도 된다는 의미인것 같은데 아니다.
    // A, B 둘 다 0 초과 10 미만이라는 의미다.
    
    // 그리고 프로그램이 언제 종료되는지 모르겠다.
    // 마지막 입력이 0 이라는데 0을 받으면 terminate 라는 의미인가?
    
    // 그리고 B 도 0이 안되는게 맞다면, A = 5 B = 0 을 입력 받았을 때 종료하는게 맞는거겠지?
    
    // 그리고 무한루프로 구현하면 쉬운데, 과연 무한루프로 구현해도 되는가? 를 모르겠다.
    ios_base::sync_with_stdio(false);
    int a, b;
    while(true){
        cin >> a >> b;
        if(a <= 0 || 10 <= a || b <= 0 || 10 <= b)
            break;
        cout << a + b << "\n";
    }
    return 0;
}