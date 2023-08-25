#include <iostream>
using namespace std;
int main() {
    // 선언 및 초기화 ----------------------
    char str[5][15];
    for(int i = 0 ; i < 5 ; i++)
        for(int j = 0 ; j < 15 ; j++)
            str[i][j] = '\0';
    for(int i = 0 ; i < 5 ; i++){
        cin >> str[i];
    }
    
    // 동작 및 정답출력 -------------------------
    for(int i = 0 ; i < 15 ; i++) 
        for(int j = 0 ; j < 5 ; j++)
            if(str[j][i] != '\0')
                cout << str[j][i];
    return 0;
}