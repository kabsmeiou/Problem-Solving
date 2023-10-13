#include <bits/stdc++.h>

int main() {
    int T;
    std::cin >> T;
    while (T--) {
        int n;
        std::cin >> n;
        std::vector<int> a(n);
        for (auto &c : a) std::cin >> c;
        sort(a.begin(), a.end());
        int ans = 0;
        for (int i = 0; i < n;) {
            if (a[i + 1] == a[i]) {
                ans += std::min(2, std::max(a[i], a[i + 1]));
                i += 2;
            } else {
                ans++;
                i++;
            }
        }
        std::cout << ans << '\n';
    }
}