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
        int cur = 0;
        map<int, int> cnt, vis;
        for (int i = 0; i < m; i += 1) {
            vis[b[i]] += 1;
        }
        for (int i = 0; i < m; i += 1) {
            cnt[a[i]] += 1;
            if (vis[a[i]]) {
                if (cnt[a[i]] <= vis[a[i]] && cnt[a[i]] != 0) {
                    cur += 1;
                }
            }
        }
        int ans = (cur >= k);
        for (int i = m; i < n; i += 1) {
            cnt[a[i - m]] -= 1;
            if (vis[a[i - m]]) {
                if (cnt[a[i - m]] < vis[a[i - m]]) {
                    cur -= 1;
                }
            }
            cnt[a[i]] += 1;
            if (vis[a[i]]) {
                if (cnt[a[i]] <= vis[a[i]] && cnt[a[i]] != 0) {
                    cur += 1;
                }
            }
            ans += (cur >= k);
        }
        cout << ans << '\n';
    }
}