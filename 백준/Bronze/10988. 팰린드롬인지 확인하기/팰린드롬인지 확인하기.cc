#include <iostream>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    string str;
    cin >> str;
    int size, result = 1;
    size = str.length();
    
    for(int i = 0; i < size ; i++){
        if(str[i] != str[size-1-i]){
            result = 0;
            break;
        }
    }
    cout << result;
    return 0;
}