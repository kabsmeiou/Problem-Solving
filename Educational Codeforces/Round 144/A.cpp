#include <bits/stdc++.h>

int main() {
    int T;
    std::cin >> T;
    while (T--) {
        int n;
        std::string s;
        std::cin >> n >> s;
        std::string fb = "FBFFBFFBFBFFBFFBFBFFBFFB";
        size_t ans = fb.find(s);
        std::cout << (ans != std::string::npos ? "YES" : "NO") << '\n';
    }
}