#include <bits/stdc++.h>

using namespace std;

int main() {
    string word;
    cin >> word;
    int upper = 0;
    int lower = 0;
    for (size_t i = 0; i < word.length(); i++) {
        if (isupper(word[i])) {
            upper++;
        }
        else {
            lower++;
        }
    }

    if (upper > lower) {
        transform(word.begin(), word.end(), word.begin(), ::toupper);
    }
    else {
        transform(word.begin(), word.end(), word.begin(), ::tolower);
    }
    cout << word;
}