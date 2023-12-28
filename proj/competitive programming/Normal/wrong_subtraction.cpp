#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, count;
    cin >> n >> count;
    for (int i = 0; i < count; i++) {
        if (n % 10 == 0) {
            n = n / 10;
        }
        else {
            n--;
        }
    }

    cout << n;
}