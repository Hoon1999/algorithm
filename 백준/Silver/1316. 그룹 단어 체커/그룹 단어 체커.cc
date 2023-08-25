#include <iostream>
using namespace std;
int groupChecker(string str, int);
int main() {
    ios_base::sync_with_stdio(false);
    // 초기화 --------------
    int result = 0; // 그룹단어의 개수
    int size = 0;
    cin >> size;
    string str[size];
    for(int i = 0 ; i < size ; i++) cin >> str[i];

    // ---------------------
    for(int i = 0 ; i < size ; i++) {
        result += groupChecker(str[i], str[i].length());
    }
    cout << result;
    return 0;
}
int groupChecker(string str, int size){
    bool check = 0;
    
    for(int i = 0; i < size-1 ; i++){
        check = 0;
        for(int j = i+1 ; j < size ; j++){
            if(str[i] != str[j])
                check = 1;
            else
                if(check) return 0; // 그룹단어가 아니면 여기에 도달한다.
        }
    }
    return 1;
}