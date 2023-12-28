#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, contestant;
    cin >> n >> contestant;
    vector<int> marks;
    for (int i = 0; i < n; i++) {
        int number;
        cin >> number;
        marks.push_back(number);
    }

    int mark = marks[contestant-1];
    int total = 0;
    for (int &number : marks) {
        if (number >= mark && number > 0) {
            total++;
        }
    }
    cout << total;
}