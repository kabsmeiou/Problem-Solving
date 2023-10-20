#include <bits/stdc++.h>

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    int T;
    std::cin >> T;
    while (T--) {
        int n;
        std::cin >> n;
        std::vector<int> a(n);
        for (auto &c : a) std::cin >> c;
        int ans = -1, cur = 1;
        sort(a.begin(), a.end());
        for (int i = 1; i < n; i++) {
            if (a[i] != a[i - 1]) {
                if (n - cur >= a[i - 1]) {
                    ans = n - cur;
                    break;
                }
                cur = 1;
            } else {
                cur++;
            }
        }
        if (n - cur >= a[n - 1]) {
            ans = n - cur;
        }
        std::cout << ans << '\n';
    }
}