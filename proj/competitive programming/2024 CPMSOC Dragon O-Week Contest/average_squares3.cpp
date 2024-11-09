#include <bits/stdc++.h>

using namespace std;

int main() {
    vector<int> vec;
    for (int i = 1; i < 1000; i++) {
        vec.emplace_back(i * i * 3);
    }

    for (int i = 1; i < 1000; i++) {
        for (int j = i + 1; j < 1000; j++) {
            for (int k = j + 1; k < 1000; k++) {
                if (find(vec.begin(), vec.end(), i * i + j * j + k * k) != vec.end()) {
                    cout << i << ", " << j << ", " << k << endl;
                    return 0;
                }
            }
        }
    }
}