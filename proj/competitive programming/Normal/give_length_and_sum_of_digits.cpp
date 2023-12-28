#include <bits/stdc++.h>

using namespace std;

int main() {
    int m, s;

    if (m > 1 && s == 0) {
        cout << "-1 -1";
        return 0;
    }
    else if (m*9 < s) {
        cout << "-1 -1";
        return 0;
    }

    if (m == 1) {
        cout << s << " " << s;
    }

    s--;
    for (int i = m; i > 0; i++) {
        
    }
}