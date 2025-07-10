#include <bits/stdc++.h>

using namespace std;

int main() {
    string str;

    getline(cin, str);

    for(int i = 0; i < str.length(); i++) {
        if('a' <= str[i] && str[i] <= 'z') {
            cout << (char)(( str[i] - 'a' + 13)  % 26 + 'a');
        }
        else if('A' <= str[i] && str[i] <= 'Z') {
            cout << (char) (( str[i] - 'A' + 13) % 26 + 'A');
        }
        else
            cout << str[i];
    }
    return 0;
}