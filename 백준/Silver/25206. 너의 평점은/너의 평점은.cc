#include <iostream>
using namespace std;

long double calc(long double, string);
int main() {
    ios_base::sync_with_stdio(false);
    // 선언 및 초기화 --------------------
    long double credit = 0.0; // 학점
    string grade; // 등급(A, B, ...)
    long double sum =0.0; // 평균을 구하기 위한 분자
    int cnt = 0; // 평균을 구하기 위한 분모
    long double result = 0.0;
    
    // --------------------------
    for(int i = 0 ; i < 20; i++) {
        cin >> grade >> credit >> grade; // 처음 받는 값(과목명)은 버린다.
        if(grade != "P") {
            sum += calc(credit, grade);
            cnt += credit;
        }
    }
    result = sum/cnt;
    // --------------------------
    cout.precision(6);
    cout << result;
    return 0;
}
long double calc(long double credit, string grade) {

    if(grade == "A+")
            return 4.5 * credit;
    else if(grade == "A0")
            return 4.0 * credit;
    else if(grade == "B+")
            return 3.5 * credit;
    else if(grade == "B0")
            return 3.0 * credit;
    else if(grade == "C+")
            return 2.5 * credit;
    else if(grade == "C0")
            return 2.0 * credit;
    else if(grade == "D+")
            return 1.5 * credit;
    else if(grade == "D0")
            return credit;
    else if(grade == "F")
            return 0.0;
    return 0.0;
}