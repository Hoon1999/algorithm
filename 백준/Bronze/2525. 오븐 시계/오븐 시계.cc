#include <iostream>
using namespace std;

int main() {
    // 아. 자정을 넘어가는 것도 처리를 해줘야 하는구나.
    int hour, min, time;
    cin >> hour >> min;
    cin >> time;
    
    min += time;
    hour = hour + min/60;
    hour = hour%24;
    min = min%60;
    
    
    cout << hour << " " << min;
    return 0;
}