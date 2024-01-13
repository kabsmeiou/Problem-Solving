#include <bits/stdc++.h>
#define int long long
using namespace std;
signed main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int T;
    cin >> T;
    while (T--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (auto &c : a) cin >> c;
        int ans = 0;
        for (int i = 1; i <= n; i++) {
            if (n % i == 0) {
                int g = 0;
                for (int j = i; j < n; j++) {
                    g = std::gcd(a[j] - a[j - i], g);
                }
                ans += (g != 1);
            }
        }
        cout << ans << '\n';
    }
}