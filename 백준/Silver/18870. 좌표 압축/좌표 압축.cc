#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    //변수 선언 및 초기화
    vector<int> v;
    vector<int> answer;
    int n, temp;
    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> temp;
        v.push_back(temp);
    }
    answer = v;
    
    // 구현
    // 정렬 -> 중복제거
    sort(v.begin(), v.end());
    v.erase(unique(v.begin(), v.end()), v.end());
    
    // 일치하는 인덱스 찾기
    /* 시간초과
    for(int i = 0; i < answer.size(); i++) {
        for(int j = 0; j < v.size(); j++) {
            if(answer[i] == v[j]) {
                answer[i] = j;
                break;
            }
        }
    } 
    */
    
    // 정답 출력
    for(int i = 0; i < answer.size(); i++) {
        cout << lower_bound(v.begin(), v.end(), answer[i]) - v.begin() << " ";
    }
    return 0;
}