#include <bits/stdc++.h>

int main() {
    int T;
    std::cin >> T;
    while (T--) {
        int n, s;
        std::cin >> n >> s;
        std::vector<int> a(n + 1, 0), pref(n + 1);
        for (int i = 1; i <= n; i++) {
            std::cin >> a[i];
            pref[i] = pref[i - 1] + a[i];
        }
        if (pref[n] < s) {
            std::cout << -1 << '\n';
            continue;
        }
        int ans = 1e9;
        for (int i = 1; i <= n; i++) {
            int l = i, r = n;
            while (l <= r) {
                int mid = (l + r) >> 1;
                if (pref[mid] - pref[i - 1] > s) {
                    r = mid - 1;
                } else {
                    l = mid + 1;
                }
            }
            ans = std::min(ans, (n - r) + (i - 1));
        }
        std::cout << ans << '\n';
        /*int cur = 0, mx = -1;
        for (int i = 0, j = 0; i < n; i++) {
            while (j < n && cur + a[j] <= s) { //get biggest window with sum == s
                cur += a[j];
                ++j;
            }
            if (cur == s) {
                mx = std::max(mx, (j - i));
            }
            cur -= a[i];
        }
        std::cout << n - mx << '\n';
        */
    }
}