#include <iostream>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    
    int N, M;
    string str;
    cin >> N;
    
    for(int n = 0 ; n < N ; n++){
        cin >> M >> str;
        for(int i = 0 ; i < str.length() ; i++){
            for(int m = 0; m<M ; m++) 
                cout << str[i];
        }
        cout << "\n";
    }
    
    return 0;
}