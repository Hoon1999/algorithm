#include <iostream>
using namespace std;
int main() {
    // 현재 가진 말의 개수를 입력으로 받음.
    // 부족한 말의 개수를 출력함.
    // 부족한 말의 수 = 필요한 말의 수 - 현재 가진 개수
    // king 을 0개 가진경우 (1개 부족함)
    // 부족한 말의 수 = 1 - 0 = 1
    // king 을 1개 가진경우 (더 가질 필요 없음)
    // 부족한 말의 수 = 1 - 1 = 0
    // king 을 2개 가진경우 (-1개 부족함, 1개 넘침)
    // 부족한 말의 수 = 1 - 2 = -1
    int king, queen, rook, bishop, knight, pawn;
    cin >> king >> queen >> rook >> bishop >> knight >> pawn;
    king = 1 - king ;
    queen = 1 - queen;
    rook = 2 - rook;
    bishop = 2 - bishop;
    knight = 2 - knight;
    pawn = 8 - pawn;
    
    cout << king << " ";
    cout << queen << " ";
    cout << rook << " ";
    cout << bishop << " ";
    cout << knight << " ";
    cout << pawn ;
    return 0;
}