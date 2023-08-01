#include <iostream>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    int a, b;
    while(true){
        if(scanf("%d %d", &a, &b) == EOF)
            break;
        cout << a+b << "\n";
    }
    return 0;
}