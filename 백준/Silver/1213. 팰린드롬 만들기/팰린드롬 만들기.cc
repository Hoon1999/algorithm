#include <bits/stdc++.h>

using namespace std;

string leftStr = "", midStr = "", rightStr = "";
string input;
int arr[26];

int main() {
    cin >> input;
    for(int i = 0; i < input.length(); i++) {
        arr[input[i] - 'A']++;
    }
    for(int i = 0; i < 26; i++) {
        if(arr[i] & 1) {
            if(midStr == "") {
                midStr = (char)(i + 'A');
                arr[i]--;
            }
            else {
                cout << "I'm Sorry Hansoo\n";
                return 0;
            }
        }
        if(arr[i] >= 2) {
            for(int j = 0; j < arr[i] / 2; j++) {
                leftStr = leftStr + (char)(i + 'A');
                rightStr = (char)(i + 'A') + rightStr;
            }
        }
    }

    cout << leftStr << midStr << rightStr << endl;
    return 0;
}