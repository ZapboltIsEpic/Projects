#include <bits/stdc++.h>

using namespace std;

int factorial(int number) {
    if (number == 0) {
        return 1;
    }

    for (int i = number-1; i > 0; i--) {
        number *= i;
    }
    return number;
}

int main() {
    string s1;
    cin >> s1;

    int total1 = 0;
    for (int i = 0; i < s1.size(); i++) {
        if (s1[i] == '+') {
            total1++;
        }
        else {
            total1--;
        }
    }

    string s2;
    cin >> s2;

    int questions = 0;
    int total2 = 0;
    for (int i = 0; i < s2.size(); i++) {
        if (s2[i] == '+') {
            total2++;
        }
        else if (s2[i] == '-'){
            total2--;
        }
        else {
            questions++;
        }
    }

    int total = total1 - total2;
    if (questions == 0 && total == 0) {
        cout << "1.000000000000";
        return 0;
    }

    if (abs(total) > questions) {
        cout << "0.000000000000";
        return 0;
    }
    else if ((questions - total) % 2 != 0) {
        cout << "0.000000000000";
        return 0;
    }

    int x = (questions-total)/2;
    cout << fixed << setprecision(10) << (factorial(questions) / (factorial(x)*factorial(questions-x))) / pow(2, questions);
}