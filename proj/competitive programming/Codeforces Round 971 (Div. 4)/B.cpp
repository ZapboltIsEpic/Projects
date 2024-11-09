#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;

    map<string, int> possibleNotes = {{"#...", 1}, {".#..", 2}, {"..#.", 3}, {"...#", 4}};

    for (int i = 0; i < n; i++) {
        vector<int> ans;
        int numberOfRows;
        cin >> numberOfRows;
        for (int j = 0; j < numberOfRows; j++) {
            string s;
            cin >> s;
            ans.emplace_back(possibleNotes[s]);
        }

        for (int j = numberOfRows-1; j >= 0; j--) {
            cout << ans[j] << " ";
        }
    }
}