#include <bits/stdc++.h>
#define int long long
using namespace std;  
signed main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int T;
    cin >> T;
    while (T--) {
        int n, k, a, b;
        cin >> n >> k >> a >> b;
        vector<pair<int, int>> vp(n);
        for (int i = 0; i < n; i += 1) {
            int x, y;
            cin >> x >> y;
            vp[i] = {x, y};
        }
        if (a <= k && b <= k) {
            cout << 0 << '\n';
            continue;
        }
        a--, b--, k--;
        int ans = (abs(vp[a].first - vp[b].first) + abs(vp[a].second - vp[b].second));
        int xx = 1e12, yy = 1e12;
        for (int i = 0; i < k + 1; i += 1) {
            int to_major = (abs(vp[i].first - vp[a].first) + abs(vp[i].second - vp[a].second));
            int to_b = (abs(vp[i].first - vp[b].first) + abs(vp[i].second - vp[b].second));
            xx = min(to_major, xx), yy = min(to_b, yy);
        }
        ans = min(ans, xx + yy);

        cout << ans << '\n';
    }
}