#include <bits/stdc++.h>

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    int T;
    std::cin >> T;
    while (T--) {
        std::string s[3];
        std::cin >> s[0] >> s[1] >> s[2];
        if (s[0][0] == s[0][1] && s[0][1] == s[0][2] && s[0][0] != '.') {
            std::cout << s[0][0] << '\n';
            continue;
        }
        if (s[1][0] == s[1][1] && s[1][1] == s[1][2] && s[1][0] != '.') {
            std::cout << s[1][0] << '\n';
            continue;
        }
        if (s[2][0] == s[2][1] && s[2][1] == s[2][2] && s[2][0] != '.') {
            std::cout << s[2][0] << '\n';
            continue;
        }
        if (s[0][2] == s[1][2] && s[1][2] == s[2][2] && s[0][2] != '.') {
            std::cout << s[0][2] << '\n';
            continue;
        }
        if (s[0][1] == s[1][1] && s[1][1] == s[2][1] && s[0][1] != '.') {
            std::cout << s[0][1] << '\n';
            continue;
        }
        if (s[0][2] == s[1][1] && s[1][1] == s[2][0] && s[0][2] != '.') {
            std::cout << s[0][2] << '\n';
            continue;
        }
        if (s[0][0] == s[1][1] && s[1][1] == s[2][2] && s[0][0] != '.') {
            std::cout << s[0][0] << '\n';
            continue;
        }
        if (s[0][0] == s[1][0] && s[1][0] == s[2][0] && s[0][0] != '.') {
            std::cout << s[0][0] << '\n';
            continue;
        }
        std::cout << "DRAW" << '\n';
    }
}