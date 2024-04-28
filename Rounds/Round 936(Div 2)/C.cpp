#include <bits/stdc++.h>
#define int long long
using namespace std;

int components;

int dfs(int k, int x, vector<vector<int>>& g, int u, int v) {
    int cnt = 1;
    for (auto p : g[u]) {
        if (p == v) continue;
        cnt += dfs(k, x, g, p, u);
    }
    if (cnt >= x) {
        components += 1;
        return 0;
    }
    return cnt;
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int T;
    cin >> T;
    while (T--) {
        int n, k;
        cin >> n >> k;
        vector<vector<int>> g(n);
        for (int i = 0; i < n - 1; i += 1) {
            int u, v;
            cin >> u >> v;
            u--, v--;
            g[u].push_back(v);
            g[v].push_back(u);
        }

        auto check = [&](int x) {
            components = 0;
            dfs(k, x, g, 0, -1);
            return components >= k + 1;
        };
        
        int ans, l = 0, r = n;
        while (l <= r) {
            int mid = (l + r) >> 1;
            if (check(mid)) {
                ans = mid;
                l = mid + 1;
            } else {
                r = mid - 1;
            }
        }
        cout << ans << '\n';
    }
}