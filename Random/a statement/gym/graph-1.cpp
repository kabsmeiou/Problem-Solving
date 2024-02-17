#include <bits/stdc++.h>
#define int long long
using namespace std;
signed main() {
    int n, k;
    cin >> n >> k;
    vector<vector<int>> g(n + 1);
    for (int i = 0; i < n - 1; i += 1) {
        int u;
        cin >> u;
        g[i + 1].push_back(i + 1 + u);
    }
    bool ok = false;
    function<void(int, int)> dfs = [&](int u, int p) {
        for (auto v : g[u]) {
            if (v == p) continue;
            dfs(v, u);
            if (v == k) {
                ok = true;
                break;
            }
        }
    };
    dfs(1, 1);
    cout << (ok ? "YES" : "NO") << '\n';
}