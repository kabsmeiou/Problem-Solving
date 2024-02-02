#include <bits/stdc++.h>
#define int long long
using namespace std;
signed main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int T;
    cin >> T;
    while (T--) {
        int n, m;
        cin >> n >> m;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        vector<int> cnt(n);
        vector<pair<int, int>> g(m);
        for (int i = 0; i < m; i++) {
            int x, y;
            cin >> x >> y;
            cnt[x - 1]++;
            cnt[y - 1]++;
            g[i] = {x - 1, y - 1};
        }
        if (m & 1) {
            int ans = 1e9;
            for (int i = 0; i < n; i++) {
                if (cnt[i] & 1) {
                    ans = min(ans, a[i]);
                }
            }
            for (int i = 0; i < m; i++) {
                ans = min(ans, a[g[i].first] + a[g[i].second]);
            }
            cout << ans << '\n';
        } else {
            cout << 0 << '\n';
        }
    }
}