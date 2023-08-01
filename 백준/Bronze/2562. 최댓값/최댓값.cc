#include <iostream>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    int size = 9;
    int a[size];
    int max = 0; // a 는 자연수만 들어와서 max 는 0부터 시작
    int index;
    for(int i = 0 ; i < size ; i++){
        cin >> a[i];
        if(max < a[i]){
            max = a[i];
            index = i;
        }
    }
    cout << max << "\n";
    cout << index+1 ;
    return 0;
}