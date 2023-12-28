#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    n++;

    bool condition = true;
    while (condition) {
        vector<int> vec;
        int i = 0;
        for (i = 0; i < 4; i++) {
            string s = to_string(n);
            if (std::find(vec.begin(), vec.end(), int(s[i])) != vec.end()) {
                n++;
                break;
            }
            vec.push_back(int(s[i]));
            

        }

        if (i == 4) {
            condition = false;
        }
    }

    cout << n;
}