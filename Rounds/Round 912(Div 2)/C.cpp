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
        std::cin >> n;
        vector<int> a(n);
        for (auto &c : a) cin >> c;
        vector<int> suf(n + 1, 0);
        for (int i = n - 1; i >= 0; i--) {
            suf[i] = suf[i + 1] + a[i];
        }
        int ans = suf[0];
        for (int i = 1; i < n; i++) {
            if (suf[i] > 0) {
                ans += suf[i];
            }
        }
        cout << ans << '\n';
    }
}