#include <bits/stdc++.h>

using namespace std;

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int T;
    cin >> T;
    while (T--) {
        int n, m, d;
        cin >> n >> m >> d;
        vector<int> p(n + 1);
        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;   
            p[x] = i;
        }
        vector<int> a(m);
        int ans = 1e9;
        for (auto &c : a) cin >> c;
        for (int i = 1; i < m; i++) {
            int gap = p[a[i]] - p[a[i - 1]];
            ans = min(ans, gap);
            if (d < n - 1) ans = min(ans, d + 1 - gap);
        }
        cout << max(ans, 0) << '\n';
    }
}