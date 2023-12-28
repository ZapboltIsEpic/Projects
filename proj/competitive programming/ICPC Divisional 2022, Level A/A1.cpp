#include <bits/stdc++.h>

using namespace std;

int main() {
    int row, column;
    cin >> row >> column;
    int max_power = 0;

    vector<char> powers(column, 'a');
    for (int i = 0; i < row; i++) {
        string value;
        cin >> value;
        for (int j = 0; j < column; j++) {
            if (i == 0) {
                powers[j] = value[j]; 
            }
            else {
                if (powers[j] != value[j]) {
                    powers[j] = '?';
                }
            }
        }
    }

int current_max = 0;
    for (auto &value : powers) {
        if (value != '?') {
            current_max++;
        }
        else {
            max_power = max(current_max, max_power);
            current_max = 0;
        }
    }

    max_power = max(current_max, max_power);

    cout << max_power;
}