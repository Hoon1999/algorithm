#include <bits/stdc++.h>

using namespace std;

int cost[4];
int arr[104];
int enter, leave, sum;

int main() {
    cin >> cost[1] >> cost[2] >> cost[3];

    for(int i = 0; i < 3; i++) {
        cin >> enter >> leave;

        for(int j = enter; j < leave; j++) {
            arr[j]++;
        }
    }

    for(int i = 0; i < 104; i++) {
        sum += cost[arr[i]] * arr[i];
    }
    cout << sum << "\n";

    return 0;
}