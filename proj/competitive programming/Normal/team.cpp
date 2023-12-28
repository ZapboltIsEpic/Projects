#include <bits/stdc++.h>

using namespace std;

int main() {
    int problems = 0;
    cin >> problems;

    int count = 0;
    for (int i = 0; i < problems; i++) {
        int a, b, c;
        cin >> a >> b >> c;
        if (a + b + c >= 2) {
            count++;
        }
    }

    cout << count << endl;

    return 0;
}
