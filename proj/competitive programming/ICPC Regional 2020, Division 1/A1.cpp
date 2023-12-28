#include <bits/stdc++.h>

using namespace std;

int main() {
    int input;
    cin >> input;
    int total = 0;
    for (int i = 1; i <= input; i++) {
        total +=  int(floor(static_cast<double>(input) / i));
    }
    cout << total;
}