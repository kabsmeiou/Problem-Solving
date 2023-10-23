#include <bits/stdc++.h>

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    int T;
    std::cin >> T;
    while (T--) {
        std::string s;
        std::cin >> s;
        int ans = 0;
        int prev = 1;
        for (int i = 0; i < 4; i++) {
            ans += std::abs(prev - (s[i] - '0' == 0 ? 10 : s[i] - '0')) + 1;
            prev = (s[i] - '0' == 0 ? 10 : s[i] - '0');
        }
        std::cout << ans << '\n';
    }
}