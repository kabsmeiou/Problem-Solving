#include <bits/stdc++.h>
signed main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(0);
    int T;
    std::cin >> T;
    while (T--) {
        int n;
        std::string s;
        std::cin >> n >> s;
        if (n < 3) {
            std::cout << 0 << '\n';
            continue;
        }
        int ans = 0;
        for (int i = 0; i < n;) {
            if (i + 2 < n && s[i] == 'm' && s[i + 1] == 'a' && s[i + 2] == 'p') {
                ans += 1;
                i += 3;
            } else if (i + 2 < n && s[i] == 'p' && s[i + 1] == 'i' && s[i + 2] == 'e') {
                ans += 1;
                i += 3;
            } else {
                i += 1;
            }
        }
        std::cout << ans << '\n';
    }
}