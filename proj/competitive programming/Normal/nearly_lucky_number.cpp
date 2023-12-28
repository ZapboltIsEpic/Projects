#include <bits/stdc++.h>

using namespace std;

int main() {
    string n;
    cin >> n;
    int lucky_digits = 0;
    for (int i = 0; i < n.size(); i++) {
        if (n[i] == '4' || n[i] == '7') {
            lucky_digits++;
        }
    }

    if (lucky_digits == 4 || lucky_digits == 7) {
        cout << "YES";
    }
    else {
        cout << "NO";
    }
}