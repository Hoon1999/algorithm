#include <iostream>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    
    string str;
    cin >> str;
    int cnt = 0;
    char c;
    
    for(int i = 0 ; i < str.length() ; i++){
        c = str[i];
        switch(c) {
        case 'c' : {
            if(str[i+1] == '=' || str[i+1] == '-') {
                i++;
            }
            break;
        }
        case 'd' : {
            if(str[i+1] == '-') {
                i++;
            }
            else if(str[i+1] == 'z' && str[i+2] == '=') {
                i+=2;
            }
            break;
        }
        case 'l' : {
            if(str[i+1] == 'j') {
                i++;
            }
            break;
        }
        case 'n' : {
            if(str[i+1] == 'j') {
                i++;
            }
            break;
        }
        case 's' : {
            if(str[i+1] == '=') {
                i++;
            }
            break;
        }
        case 'z' : {
            if(str[i+1] == '=') {
                i++;
            } 
            break;
        }
        }
        cnt++;
    }
    cout << cnt;
    return 0;
}