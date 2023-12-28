#include <bits/stdc++.h>

using namespace std;

int main() {
    string s;
    cin >> s;

    char* cstr = new char[s.length() + 1];
    strcpy(cstr, s.c_str());
    char *token = strtok(cstr, "+");

    vector<int> numbers;
    while (token != nullptr) {
        numbers.push_back(atoi(token)); 
        token = strtok(nullptr, "+");
    }

    sort(numbers.begin(), numbers.end());
    for (int i = 0; i < numbers.size(); i++) {
        cout << numbers[i];
        if (i != numbers.size() - 1) {
            cout << '+';
        }
    }
}