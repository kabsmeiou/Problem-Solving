#include <bits/stdc++.h>
#define int long long
signed main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    int n;
    std::cin >> n;
    std::vector<int> a(n);
    for (auto &c : a) std::cin >> c;
    int cur = 0, cur2 = 0;
    for (int i = 0, j = n - 1; i < n; i++, j--) {
        cur = std::max(cur + 1, a[i]);
        cur2 = std::max(cur2 + 1, a[j]);
    }
    int max = *std::max_element(a.begin(), a.end());
    int pos = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] == max) {
            pos = i;
            break;
        }
    }
    for (int i = 0; i < n; i++) {
        if (i < pos) {
            max = std::max(max, a[i] + n - i - 1);
        } else if (i > pos) {
            max = std::max(max, a[i] + i);
        }
    }
    int ans = std::min({cur, max, cur2});
    std::cout << ans << '\n';
}