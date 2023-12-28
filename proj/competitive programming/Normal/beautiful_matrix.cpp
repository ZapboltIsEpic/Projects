#include <bits/stdc++.h>

using namespace std;

int main() {
    int col;
    int row = 0;
    while (true) {
        int number;
        for (int i = 0; i < 5; i++) {
            cin >> number;
            if (number == 1) {
                col = i;
                break;
            }
        }
        if (number == 1) {
            break;
        }
        row++;
    }

    cout << abs(2 - row) + abs(2 - col);
}