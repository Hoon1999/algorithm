#include <iostream>
#include <sstream>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    int count = 0;
    string input;
    getline(cin, input);
    stringstream ss;
    ss.str(input);
    
    
    while( ss >> input ){
        count++;
    }
    
    cout << count;
    return 0;
}