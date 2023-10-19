#include <bits/stdc++.h>
#define ll long long
int main() {
    int T;
    std::cin >> T;
    while (T--) {
        int n, k;
        std::cin >> n >> k;
        int ans = -1;
        std::vector<int> a(n);
        for (auto &c : a) std::cin >> c;
        if (n == 1) {
            std::cout << 0 << '\n';
            continue;
        }
        sort(a.begin(), a.end());
        int cur = 0;
        for (int i = 1; i < n; i++) {
            if (a[i] - a[i - 1] <= k) {
                cur++;
            } else {
                cur = 0;
            }
            ans = std::max(cur, ans);
        }
        
        std::cout << n - ans - 1 << '\n';
    }
}