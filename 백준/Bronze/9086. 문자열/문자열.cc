#include <iostream>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    int i;
    cin >> i;
    string str;
    
    for(int j = 0; j < i ; j++){
        cin >> str;
        cout << str[0];
        cout << str[str.length()-1] << "\n";
    }
    return 0;
}