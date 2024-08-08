#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    string input, ret = "";
    getline(cin, input);
    for(int i = 0; i < input.length(); ++i) {
        if(isalpha(input[i])) {
            if('A' <= input[i] && input[i] <= 'Z')
                ret += (char)((input[i] -'A' + 13) % 26 + 'A');
            else
                ret += (char)((input[i] -'a' + 13) % 26 + 'a');
        }
        else {
            ret += input[i];
        }
    }
    cout << ret;
    return 0;
}