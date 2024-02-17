#include <bits/stdc++.h>
#define int long long
using namespace std;
signed main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int T;
    cin >> T;
    while (T--) {
        int n, m, k;
        cin >> n >> m >> k;
        vector<int> a(n), b(m);
        for (auto &c : a) cin >> c;
        for (auto &c : b) cin >> c;
        sort(a.begin(), a.end());
        sort(b.begin(), b.end());
        vector<int> f, g;
        for (int i = 0; i < n; i += 1) {
            if (i == 0) {
                f.push_back(a[i]);
            } else {
                if (a[i] != f.back()) {
                    f.push_back(a[i]);
                }
            }
        }
        for (int i = 0; i < m; i += 1) {
            if (i == 0) {
                g.push_back(b[i]);
            } else {
                if (b[i] != g.back()) {
                    g.push_back(b[i]);
                }
            }
        }
        vector<int> need(k, 0);
        int p = 0;
        for (int i = 0; i < f.size(); i += 1) {
            if (f[i] <= k) {
                p += 1;
                need[f[i] - 1] = 1;
            } else {
                break;
            }
        }
        int q = 0;
        for (int i = 0; i < g.size(); i += 1) {
            if (g[i] <= k) {
                q += 1;
                need[g[i] - 1] = 1;
            } else {
                break;
            }
        }
        bool ok = true;
        for (int i = 0; i < k; i += 1) {
            if (!need[i]) {
                ok = false;
                break;
            }
        }
        if (q >= k / 2 && p >= k / 2) {
            cout << (ok ? "YES" : "NO") << '\n';
        } else {
            cout << "NO" << '\n';
        }
    }
}