#include <bits/stdc++.h>
#define ll long long
int main() {
    int tt;
    std::cin >> tt;
    while (tt--) {
        int n;
        std::cin >> n;
        std::vector<int> a(n);
        for (auto&c : a) std::cin >> c;
        int ans = 0;
        for (int i = 0; i < n; i++) {
            ans++;
            if (ans == a[i]) {
                ans++;
                continue;
            }
        }
        std::cout << ans << std::endl;
    }
}