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
        sort(a.begin(), a.end());
        a.push_back(n + 1);
        int ans = a[0] != 0;
        for (int i = 0; i < n; i++) {
            if (a[i] <= i && a[i + 1] > i + 1) ans++;
        }
        std::cout << ans << '\n';
    }
}