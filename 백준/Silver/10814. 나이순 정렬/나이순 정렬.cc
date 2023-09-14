#include <iostream>
using namespace std;
void my_sort(short* age, string* name, int start, int size);
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    // 선언 및 초기화
    int n;
    cin >> n;
    short* age = new short[n];
    string* name = new string[n];
    for (int i = 0; i < n; i++) {
        cin >> age[i] >> name[i];
    }

    // 구현
    my_sort(age, name, 0, n);

    // 정답 출력
    for (int i = 0; i < n; i++) {
        cout << age[i] << " " << name[i] << "\n";
    }
    return 0;
}
void my_sort(short* age, string* name, int start, int size) {
    int mid = size / 2;
    if (size > 2) {
        my_sort(age, name, start, mid);
        my_sort(age, name, start+mid, size - mid);
    }
    else if (size == 1) {
        return;
    }
    short* temp_age = new short[size];
    string* temp_name = new string[size];

    int i = start, j = start+mid, k = 0;
    while (true) {
        if (*(age + i) <= *(age + j)) {
            temp_age[k] = *(age + i);
            temp_name[k] = *(name + i);
            i++; k++;
        }
        else {
            temp_age[k] = *(age + j);
            temp_name[k] = *(name + j);
            j++; k++;
        }
        if (i == (start+mid)) {
            // 오른쪽 배열의 남은 값들을 모두 할당하고 반복문 탈출
            for (; j < (start + size); j++) {
                temp_age[k] = *(age + j);
                temp_name[k] = *(name + j);
                k++;
            }
            break;
        }
        else if (j == (start + size)) {
            // 왼쪽 배열의 남은 값들을 모두 할당하고 반복문 탈출
            for (; i < (start+mid); i++) {
                temp_age[k] = *(age + i);
                temp_name[k] = *(name + i);
                k++;
            }
            break;
        }
    }
    for (i = 0; i < size; i++) {
        *(age + i + start) = temp_age[i];
        *(name + i + start) = temp_name[i];
    }
    delete[] temp_age;
    temp_age = nullptr;
    delete[] temp_name;
    temp_name = nullptr;
    return;
}