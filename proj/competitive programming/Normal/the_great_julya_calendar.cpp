#include <bits/stdc++.h>

using namespace std;

long long f(string n) {
    int maxDigit = 0;
    for (int i = 0; i < n.size(); i++) {
        int digit = n[i] - '0';
        maxDigit = max(maxDigit, digit);
    }

    if (maxDigit == 0) {
        return 0;
    }
    long long num = stoll(n);
    num -= static_cast<int>(maxDigit);
    return 1 + f(to_string(num));
}

int main() {
    string n;
    cin >> n;
    cout << f(n);
}