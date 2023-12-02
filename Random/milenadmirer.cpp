#include <bits/stdc++.h>
#define int long long
signed main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    int T;
    std::cin >> T;
    while (T--) {
        int n;
        std::cin >> n;
        std::vector<int> a(n);
        for (auto &c : a) std::cin >> c;
        int ans = 0, cur = a[n - 1];
        for (int i = n - 1; i >= 0; i--) {
            if (a[i] <= cur) {
                cur = a[i];
                continue;
            }
            int temp = (a[i] - 1) / cur + 1;
            ans += temp - 1;
            cur = a[i] / temp;
        }
        std::cout << ans << '\n';
    }
}