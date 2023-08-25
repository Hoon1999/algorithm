#include <iostream>
using namespace std;

int calc(bool* arr, int, int, int);
int main() {
    int m, n, min = 2500, sum; // m 행 n 열
    cin >> m >> n;
    bool arr1[m][n] ; // white 로 시작한다.
    bool arr2[m][n] ; // black 으로 시작한다.
    fill(arr1[0], arr1[0]+(m*n), 0);
    fill(arr2[0], arr2[0]+(m*n), 0);
    string str;
    for(int i = 0; i < m; i++){
        cin >> str;
        for(int j = 0 ; j < n; j++){
            
            if(i%2 == j%2) {
                if(str[j] == 'B')
                    arr1[i][j] = 1;
                else
                    arr2[i][j] = 1;
            }
            else {
                if(str[j] == 'W')
                    arr1[i][j] = 1;
                else
                    arr2[i][j] = 1;
            }
        }
    }
    for(int i = 0; i < m-7 ; i++){
        for(int j = 0 ; j < n-7 ; j++) {
            sum = 0;
            sum = calc((bool*)arr1, n, i, j);
            if(sum < min)
                min = sum;
            sum = calc((bool*)arr2, n, i, j);
            if(sum < min)
                min = sum;
        }
    }
    cout << min;
    return 0;
}
int calc(bool* a, int size, int x, int y) {
    bool (*arr)[size] = (bool(*)[size])a;
    int sum = 0;
    for(int i = x; i < x+8 ; i++)
        for(int j = y; j < y+8 ; j++)
            sum += arr[i][j];
    return sum;
}