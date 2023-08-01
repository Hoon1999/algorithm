#include <iostream>
using namespace std;
int main(){
    int N, min, max;
    cin >> N;
    int a[N];
    min =  1000000;
    max = -1000000;
    for(int i = 0; i < N ; i++){
        cin >> a[i];
        if(a[i] < min)
            min = a[i];
        if(max < a[i])
            max = a[i];
    }
    cout << min << " " << max;
    return 0;
}