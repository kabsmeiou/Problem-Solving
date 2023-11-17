#include <bits/stdc++.h>

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    int T;
    std::cin >> T;
    while (T--) {
        int n, k;
        std::cin >> n >> k;
        std::string s;
        std::cin >> s;
        int ans = 0;
        std::vector<int> a(26, 0), b(26, 0);
        for (int i = 0; i < n; i++) {
            if (islower(s[i])) a[s[i] - 'a']++;
            else b[s[i] - 'A']++;
        }
        for (int i = 0; i < 26; i++) {
            int temp = std::min(a[i], b[i]);
            ans += temp;
            a[i] -= temp, b[i] -= temp;
            int umax = std::max(a[i], b[i]);
            int umin = std::min(umax / 2, k);
            ans += umin, k -= umin;
        }
        std::cout << ans << '\n';
    }
}