#include <bits/stdc++.h>

int main() {
    int T;
    std::cin >> T;
    while (T--) {
        int n, m;
        std::cin >> n >> m;
        std::string x, s;
        std::cin >> x >> s;
        std::string a = x;
        int ans;
        bool ok = false;
        for (int i = 0; i < 6; i++) {
            if (a.find(s) != std::string::npos) {
                ans = i;
                ok = true;
                break;
            }
            a += a;
        }
        std::cout << (ok ? ans : -1) << '\n';
    }
}