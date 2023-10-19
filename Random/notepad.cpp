#include <bits/stdc++.h>
#define ll long long
int main() {
    int T;
    std::cin >> T;
    while (T--) {
        int n;
        std::string s;
        std::cin >> n >> s;
        if (s.size() <= 3) {
            std::cout << "NO" << '\n';
            continue;
        }
        bool ok = false;
        for (int i = 1; i < n - 2; i++) {
            std::string cur = "";
            cur += s[i - 1];
            cur += s[i];
            size_t f = s.find(cur, i + 1);
            if (f != std::string::npos) {
                ok = true;
                break;
            }
        }
        std::cout << (ok ? "YES" : "NO") << '\n';
    }
}