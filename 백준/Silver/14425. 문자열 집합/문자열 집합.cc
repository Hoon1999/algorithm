#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    // 변수 선언 및 초기화
    int n, m, count = 0;
    cin >> n >> m;
    string strSet[n];
    string str[m];
    for(int i = 0; i < n; i++) {
        cin >> strSet[i];
    }
    for(int i = 0; i < m; i++) {
        cin >> str[i];
    }
    
    // 구현
    sort(strSet, strSet+n);
    for(int i = 0; i < m; i++) {
        /*for(int j = 0; j < n; j++) {
            if(str[i].compare(strSet[j]) == 0){
                ++count;
                break;
            }
        }*/
        int high = n-1;
        int low = 0;
        int j = low + (high-low)/2;
        while(1) {
            if(j < low || high < j) {
                break;
            }
            if(str[i].compare(strSet[j]) < 0) {
                high = j-1;
                j = low + (high-low)/2;
            }
            else if(str[i].compare(strSet[j]) > 0) {
                low = low + 1;
                j = low + (high-low)/2;
            }
            else if(str[i].compare(strSet[j]) == 0){
                ++count;
                break;
            }
        }
        
    }
    //정답 출력
    cout << count << endl;
    return 0;
}