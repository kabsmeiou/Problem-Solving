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
        vector<vector<int>> g(n);
        for (int i = 0; i < n - 1; i += 1) {
            int u, v;
            cin >> u >> v;
            u--, v--;
            g[u].push_back(v);
            g[v].push_back(u);
        }
        vector<int> dp(n);
        int ans = 0;
        function<void(int, int)> dfs = [&](int u, int p) {
            int deg = 0;
            for (auto v : g[u]) {
                if (v == p) continue;
                dp[v] = dp[u] + 1;
                cout << dp[v] << "d\n";
                dfs(v, u);
                deg += 1;
            }
            if (deg < 2) {
                ans = max(ans, n - 2 * dp[u] - 1 - deg);
            }
        };
        dfs(0, -1);
        cout << ans << '\n';
    }
}