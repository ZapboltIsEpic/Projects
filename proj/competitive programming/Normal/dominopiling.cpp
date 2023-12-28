#include <bits/stdc++.h>

using namespace std;

int main() {
    int x, y;
    cin >> x >> y;
    if (x * y % 2 == 0) {
        cout << x * y / 2;
    }
    else {
        cout << (x * y - 1) / 2;
    }

}