#include <iostream>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    string str;
    cin >> str;
    for(int i = 0 ; i < str.length() ; i++)
        str[i] = toupper(str[i]);
    int cnt[26] = {0, };
    int max = 0;
    char result = '0';
    
    for(int i = 0 ; i < str.length() ; i++){
        cnt[str[i]-65]++;
    }
    for(int i = 0 ; i < 26 ; i++){
        if(max < cnt[i]){
            max = cnt[i];
            result = i + 65;
        }
        else if(max == cnt[i]){
            result = '?';
        }
    }
    cout << result;
    return 0;
}