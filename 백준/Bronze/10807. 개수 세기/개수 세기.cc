#include <iostream>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    int N, v, cnt=0;
    cin >> N;
    int a[N];
    for(int i=0; i<N; i++){
        cin >> a[i];
    }
    cin >> v;
    for(int i=0; i<N ; i++){
        if(a[i] == v)
            cnt++;
    }
    cout << cnt;
    return 0;
}