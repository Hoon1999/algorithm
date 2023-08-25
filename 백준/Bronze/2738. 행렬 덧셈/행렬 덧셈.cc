#include <iostream>
using namespace std;
int main() {
    int x, y, temp;
    cin >> x >> y;
    int matrix[x][y];
    
    for(int i = 0; i < x ; i++)
        for(int j = 0 ; j < y ; j++){
            cin >> matrix[i][j];
        }
    
    // 3차원 배열이나
    // matrix 를 2개 만들어서 더해야 되는데
    // 귀찮아서 그냥 바로 덧셈....
    for(int i = 0; i < x ; i++)
        for(int j = 0 ; j < y ; j++){
            cin >> temp;
            matrix[i][j] += temp;
        }
    
    for(int i = 0; i < x ; i++){
        for(int j = 0 ; j < y ; j++){
            cout << matrix[i][j] << " ";
        }
    cout << "\n";
    }
    return 0;
}