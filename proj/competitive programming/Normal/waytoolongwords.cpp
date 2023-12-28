#include <iostream>
#include <vector>
#include <string>

int main() {
    int value = 0;
    std::cin >> value;
    std::vector<std::string> strings;
    for (auto i = 0; i < value; i++) {
        std::string s;
        std::cin >> s;
        if (s.length() > 10) {
            std::string modifiedString = s[0] + std::to_string(s.length() - 2) + s[s.length() - 1];
            strings.push_back(modifiedString);
        }
        else {
            strings.push_back(s);
        }
    }

    for (const auto& str : strings) {
        std::cout << str << std::endl;
    }
}