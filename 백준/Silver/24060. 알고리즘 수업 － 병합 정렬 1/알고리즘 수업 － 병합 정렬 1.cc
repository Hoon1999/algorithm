#include <bits/stdc++.h>

using namespace std;

int *tmp;
int cnt = 0, n;
void merge(int *arr,int p, int q, int r) {
    int i = p;
    int j = q+1;
    int idx = p;
    while(i <= q && j <= r) {
        if(arr[i] < arr[j]) {
            tmp[idx++] = arr[i++];
        } else {
            tmp[idx++] = arr[j++];
        }
    }
    while(i <= q) {
        tmp[idx++] = arr[i++];
    }
    while(j <= r) {
        tmp[idx++] = arr[j++];
    }
    idx = p;
    while(idx <= r) {
        cnt++;
        arr[idx] = tmp[idx];
        if(cnt == n)
            cout << tmp[idx] << "\n";
        idx++;
    }
}
void merge_sort(int *arr, int p, int r) {
    if(p == r) {
        return ;
    }
    int q = (p+r)/2;
    merge_sort(arr, p, q);
    merge_sort(arr, q+1, r);
    merge(arr, p, q, r);
}
int main() {
    int k;
    cin >> k >> n;

    int arr[k];

    int arr2[k];
    tmp = arr2;

    for(int i = 0; i < k; i++) {
        cin >> arr[i];
    }

    merge_sort(arr, 0, k-1);
    if(cnt < n) {
        cout << -1 << "\n";
    }
    return 0;
}