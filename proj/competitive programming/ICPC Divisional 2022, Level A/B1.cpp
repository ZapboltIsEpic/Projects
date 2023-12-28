#include <bits/stdc++.h>

using namespace std;

int main() {
    vector<int> numbers;

    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int number;
        cin >> number;
        numbers.push_back(number);
    }

    int total_rounds = 0;
    vector<int> swaps_per_round;
    while (!is_sorted(numbers.begin(), numbers.end())) {
        int curr_swaps = 0;
        for (int i = 1; i <= numbers.size() - 1; i++) {
            if (numbers[i] < numbers[i-1]) {
                int tmp = numbers[i-1];
                numbers[i-1] = numbers[i];
                numbers[i] = tmp;
                curr_swaps++;
            }
        }
        if (curr_swaps > 0) {
            total_rounds++;
            swaps_per_round.push_back(curr_swaps);
        }
    }

    cout << total_rounds << "\n";
    for (auto &swaps: swaps_per_round) {
        cout << swaps << "\n";
    }

}
