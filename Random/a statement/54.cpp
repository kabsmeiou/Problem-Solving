#include <bits/stdc++.h>
#define int long long
using namespace std;
signed main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int T;
    cin >> T;
    while (T--) {
        int n, k;
        cin >> n >> k;
        vector<int> a(n);
        for (auto &c : a) cin >> c;
        vector<int> dist1(k + 1, 0), dist2(k + 1, 0), prev(k + 1, -1);
        for (int i = 0; i < n; i += 1) {
            int cur = i - prev[a[i]];
            if (cur > dist1[a[i]]) {
                dist2[a[i]] = dist1[a[i]];
                dist1[a[i]] = cur;
            } else {
                dist2[a[i]] = max(dist2[a[i]], cur);
            }
            prev[a[i]] = i;
        }
        int ans = 1e12;
        for (int i = 1; i <= k; i += 1) {
            int cur = n - prev[i];
            if (cur > dist1[i]) {
                dist2[i] = dist1[i];
                dist1[i] = cur;
            } else {
                dist2[i] = max(dist2[i], cur);
            }
        }
        for (int i = 1; i <= k; i += 1) {
            ans = min(ans, max((dist1[i] + 1) / 2, dist2[i]));
        }
        cout << ans - 1 << '\n';
    }
}