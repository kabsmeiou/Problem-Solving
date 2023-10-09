#include <bits/stdc++.h>

int main() {
    int T;
    std::cin >> T;
    while (T--) {
        int n, s;
        std::cin >> n >> s;
        std::vector<int> a(n);
        int sum = 0;
        for (int i = 0; i < n; i++) {
            std::cin >> a[i];
            sum += a[i];
        }
        if (sum < s) {
            std::cout << -1 << '\n';
            continue;
        }
        int cur = 0, mx = -1;
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
    }
}