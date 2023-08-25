#include <iostream>
#include <cmath>
using namespace std;

int convert(char);
int main() {
    ios_base::sync_with_stdio(false);
    // 선언 및 초기화 -------------------------
    string n; // 숫자 n
    int size; // n 의 자릿수(string length)
    int b; // b 진법
    int temp, result = 0;
    
    cin >> n >> b;
    size = n.length();
    // 구현 ------------------------------------
    for(int i = 0 ; i < size ; i++){
        temp = convert(n[i]);
        result += temp * pow(b, size-1-i);
    }
    // 정답 제출 ----------------------------
    cout << result << "\n";
    return 0;
}
int convert(char c) {
    int k = 0;
    switch(c) {
    case 'Z': k++;
    case 'Y': k++;
    case 'X': k++;
    case 'W': k++;
    case 'V': k++;
    case 'U': k++;
    case 'T': k++;
    case 'S': k++;
    case 'R': k++;
    case 'Q': k++;
    case 'P': k++;
    case 'O': k++;
    case 'N': k++;
    case 'M': k++;
    case 'L': k++;
    case 'K': k++;
    case 'J': k++;
    case 'I': k++;
    case 'H': k++;
    case 'G': k++;
    case 'F': k++;
    case 'E': k++;
    case 'D': k++;
    case 'C': k++;
    case 'B': k++;
    case 'A': k++;
    case '9': k++;
    case '8': k++;
    case '7': k++;
    case '6': k++;
    case '5': k++;
    case '4': k++;
    case '3': k++;
    case '2': k++;
    case '1': k++;
    }
    return k;
}