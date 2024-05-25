#include <bits/stdc++.h>
#define int long long
using namespace std;
signed main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int T;
    cin >> T;
    while (T--) {
        int n, u, v;
        cin >> n >> u >> v;
        vector<int> a(n);
        for (auto &c : a) cin >> c;
        int ans = 1e16;
        for (int i = 1; i < n; i += 1) {
            if (abs(a[i] - a[i - 1]) >= 2) {
                ans = 0;
                break;
            } else if (a[i] == a[i - 1]) {
                ans = min(ans, min(u + v, 2 * v));
            } else {
                ans = min(ans, min(u, v));
            }
        }
        cout << ans << '\n';
    }
}